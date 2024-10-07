#include "SmartCar.h"
#include <iostream>
#include <fstream>

SmartCar::SmartCar(const std::string& car_id) : car_id(car_id) {}

void SmartCar::setID(const std::string& car_id) {
    this->car_id = car_id;
}

void SmartCar::assignStudent(const std::string& student_id, const std::string& student_name) {
    student.setID(student_id);
    student.setName(student_name);
}

void SmartCar::print() const {
    std::cout << "智能小车编号: " << car_id << "\n";
    student.print();
    chassis.print();
    tire.print();
    agx_kit.print();
    stereo_camera.print();
    gyroscope.print();
    lidar.print();
    lcd.print();
    battery.print();
}

void SmartCar::save(const std::string& filename) const {
    std::ofstream file(filename, std::ios::app);        //追加写入
    file << "智能小车编号: " << car_id << "\n";
    student.save(file);
    chassis.save(file);
    tire.save(file);
    agx_kit.save(filename);
    stereo_camera.save(filename);
    gyroscope.save(filename);
    lidar.save(filename);
    lcd.save(filename);
    battery.save(filename);
    file.close();
}
