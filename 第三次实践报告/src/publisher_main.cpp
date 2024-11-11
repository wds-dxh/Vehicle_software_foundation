
#include "ObstaclePublisher.h"
#include <iostream>
#include <fstream>
#include <string>

int main() {
    ObstaclePublisher publisher;
    std::string input;
    std::ofstream outFile("obstacle_status.txt");

    while (true) {
        std::cout << "请输入障碍物状态（1: 前方, 2: 左前方, 3: 右前方, q: 退出）: ";
        std::cin >> input;

        if (input == "q") {
            break;
        } else if (input == "1") {
            publisher.publish("前方");
            outFile << "前方" << std::endl;
        } else if (input == "2") {
            publisher.publish("左前方");
            outFile << "左前方" << std::endl;
        } else if (input == "3") {
            publisher.publish("右前方");
            outFile << "右前方" << std::endl;
        } else {
            std::cout << "无效输入，请重新输入。" << std::endl;
        }
    }

    outFile.close();
    return 0;
}