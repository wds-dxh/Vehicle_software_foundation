#include "SmartCar.h"
#include <iostream>

const std::string SmartCar::chassis_model = "SCOUT MINI";
const int SmartCar::wheelbase = 451;
const int SmartCar::track_width = 490;
const int SmartCar::ground_clearance = 115;
const int SmartCar::turning_radius = 0;
const std::string SmartCar::drive_type = "四轮四驱";
const int SmartCar::max_range = 10;
const std::string SmartCar::wheel_type = "公路轮";
const int SmartCar::wheel_size = 175;
const std::string SmartCar::agx_model = "AGX Xavier";
const int SmartCar::ai_performance = 32;
const int SmartCar::cuda_cores = 512;
const int SmartCar::tensor_cores = 64;
const int SmartCar::gpu_memory = 32;
const int SmartCar::storage_size = 32;
const std::string SmartCar::camera_model = "RealSense D435i";
const std::string SmartCar::lidar_model = "RS-Helios-16p";
const int SmartCar::lidar_channels = 16;
const int SmartCar::lidar_range = 100;
const int SmartCar::lidar_power = 8;
const std::string SmartCar::gyroscope_model = "CH110";
const std::string SmartCar::lcd_model = "super";
const float SmartCar::lcd_size = 11.6;
const std::string SmartCar::battery_spec = "24V/15Ah";
const int SmartCar::battery_charge_time = 2;

SmartCar::SmartCar(const std::string& car_id) : car_id(car_id), student_id(""), student_name("") {}

void SmartCar::assignStudent(const std::string& student_id, const std::string& student_name) {
    this->student_id = student_id;
    this->student_name = student_name;
}

void SmartCar::displayInfo() const {
    std::cout << "智能小车编号: " << car_id << "\n";
    std::cout << "学生编号: " << student_id << "\n";
    std::cout << "学生姓名: " << student_name << "\n";
    std::cout << "底盘型号: " << chassis_model << "\n";
    std::cout << "轮距: " << track_width << " mm\n";
    std::cout << "轴距: " << wheelbase << " mm\n";
    std::cout << "轮胎类型: " << wheel_type << " " << wheel_size << " mm\n";
    std::cout << "AGX型号: " << agx_model << " AI性能: " << ai_performance << "TOPS\n";
    std::cout << "双目摄像头型号: " << camera_model << "\n";
    std::cout << "激光雷达型号: " << lidar_model << "\n";
    std::cout << "LCD尺寸: " << lcd_size << " inch\n";
    std::cout << "电池模块: " << battery_spec << " 充电时长: " << battery_charge_time << "小时\n\n";
}
