#include "LCD.h"

LCD::LCD(const std::string& model) : model(model) {}

void LCD::setModel(const std::string& model) {
    this->model = model;
}

void LCD::print() const {
    std::cout << "LCD Model: " << model << "\n";
}

void LCD::save(const std::string& filename) const {
    std::ofstream file(filename);
    file << model << "\n";
    file.close();
}
