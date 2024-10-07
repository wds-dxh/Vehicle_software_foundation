#ifndef SMARTCAR_H
#define SMARTCAR_H

#include <string>
#include <vector>
#include "Chassis.h"
#include "Tire.h"
#include "AGXKit.h"
#include "StereoCamera.h"
#include "Gyroscope.h"
#include "Lidar.h"
#include "LCD.h"
#include "Battery.h"
#include "Student.h"

class SmartCar {
public:
    SmartCar(const std::string& car_id);
    
    void setID(const std::string& car_id);
    void assignStudent(const std::string& student_id, const std::string& student_name);
    void print() const;
    void save(const std::string& filename) const;

private:
    std::string car_id;
    Chassis chassis;
    Tire tire;
    AGXKit agx_kit;
    StereoCamera stereo_camera;
    Gyroscope gyroscope;
    Lidar lidar;
    LCD lcd;
    Battery battery;
    Student student;
};

#endif
