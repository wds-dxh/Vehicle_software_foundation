#include "Gyroscope.h"

Gyroscope::Gyroscope(const std::string& model) : model(model) {}

void Gyroscope::setModel(const std::string& model) {
    this->model = model;
}

void Gyroscope::print() const {
    std::cout << "Gyroscope Model: " << model << "\n";
}

void Gyroscope::save(const std::string& filename) const {
    std::ofstream file(filename);
    file << model << "\n";
    file.close();
}
