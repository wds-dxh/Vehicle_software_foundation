#include "Lidar.h"

Lidar::Lidar(const std::string& model) : model(model) {}

void Lidar::setModel(const std::string& model) {
    this->model = model;
}

void Lidar::print() const {
    std::cout << "Lidar Model: " << model << "\n";
}

void Lidar::save(const std::string& filename) const {
    std::ofstream file(filename);
    file << model << "\n";
    file.close();
}
