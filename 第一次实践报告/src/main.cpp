#include "SmartCar.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <termios.h>
#include <unistd.h> // For read()

char getch() {
    char buf = 0;
    struct termios old = {0};
    if (tcgetattr(0, &old) < 0)
        perror("tcsetattr()");
    old.c_lflag &= ~ICANON;
    old.c_lflag &= ~ECHO;
    old.c_cc[VMIN] = 1;
    old.c_cc[VTIME] = 0;
    if (tcsetattr(0, TCSANOW, &old) < 0)
        perror("tcsetattr()");
    if (read(0, &buf, 1) < 0)
        perror("read()");
    old.c_lflag |= ICANON;
    old.c_lflag |= ECHO;
    tcsetattr(0, TCSADRAIN, &old);
    return (buf);
}

void saveToFile(const std::vector<SmartCar>& cars, const std::string& filename) {
    std::ofstream file(filename);
    for (const auto& car : cars) {
        file << car.car_id << " " << car.student_id << " " << car.student_name << "\n";
    }
    file.close();
}

std::vector<SmartCar> loadFromFile(const std::string& filename) {
    std::ifstream file(filename);
    std::vector<SmartCar> cars;
    std::string car_id, student_id, student_name;
    while (file >> car_id >> student_id >> student_name) {
        SmartCar car(car_id);
        car.assignStudent(student_id, student_name);
        cars.push_back(car);
    }
    file.close();
    return cars;
}

void displayCarInfo(const std::vector<SmartCar>& cars, int index) {
    if (index >= 0 && index < cars.size()) {
        cars[index].displayInfo();
    }
}

int main() {
    std::vector<SmartCar> cars;
    std::string student_id, student_name;

    // 创建10台智能小车并分配给学生
    for (int i = 0; i < 10; ++i) {
        SmartCar car("cqusn" + std::to_string(1000000000 + i));
        std::cout << "请输入第" << i + 1 << "位学生的学号和姓名: ";
        std::cin >> student_id >> student_name;
        car.assignStudent(student_id, student_name);
        cars.push_back(car);
    }

    // 保存到文件
    saveToFile(cars, "smartcars.txt");

    // 从文件加载
    cars = loadFromFile("smartcars.txt");

    // 浏览小车信息
    int current_index = 0;
    char command;
    while (true) {
        displayCarInfo(cars, current_index);
        std::cout << "按'n'显示下一辆小车，按'p'显示上一辆小车，按'q'退出: ";
        command = getch();  // Use getch() here
        if (command == 'n' && current_index < cars.size() - 1) {
            ++current_index;
        } else if (command == 'p' && current_index > 0) {
            --current_index;
        } else if (command == 'q') {
            break;
        }
    }

    return 0;
}
