#ifndef SMARTCAR_H
#define SMARTCAR_H

#include <string>
#include <vector>

class SmartCar {
public:
    SmartCar(const std::string& car_id);
    void assignStudent(const std::string& student_id, const std::string& student_name);
    void displayInfo() const;

    static const std::string chassis_model;
    static const int wheelbase;
    static const int track_width;
    static const int ground_clearance;
    static const int turning_radius;
    static const std::string drive_type;
    static const int max_range;
    static const std::string wheel_type;
    static const int wheel_size;
    static const std::string agx_model;
    static const int ai_performance;
    static const int cuda_cores;
    static const int tensor_cores;
    static const int gpu_memory;
    static const int storage_size;
    static const std::string camera_model;
    static const std::string lidar_model;
    static const int lidar_channels;
    static const int lidar_range;
    static const int lidar_power;
    static const std::string gyroscope_model;
    static const std::string lcd_model;
    static const float lcd_size;
    static const std::string battery_spec;
    static const int battery_charge_time;

    std::string car_id;
    std::string student_id;
    std::string student_name;
};

#endif
