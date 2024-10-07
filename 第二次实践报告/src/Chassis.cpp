#include "Chassis.h"
#include <iostream>

void Chassis::setModel(const std::string& model) {
    this->model = model;
}

void Chassis::setWheelbase(int wheelbase) {
    this->wheelbase = wheelbase;
}

void Chassis::setTrackWidth(int track_width) {
    this->track_width = track_width;
}

void Chassis::print() const {
    std::cout << "底盘型号: " << model << "\n";
    std::cout << "轴距: " << wheelbase << " mm\n";
    std::cout << "轮距: " << track_width << " mm\n";
}

void Chassis::save(std::ofstream& file) const {
    file << "底盘型号: " << model << "\n";
    file << "轴距: " << wheelbase << " mm\n";
    file << "轮距: " << track_width << " mm\n";
}
