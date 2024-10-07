#include "Tire.h"
#include <iostream>

void Tire::setType(const std::string& type) {
    this->type = type;
}

void Tire::setSize(int size) {
    this->size = size;
}

void Tire::print() const {
    std::cout << "轮胎类型: " << type << " 尺寸: " << size << " mm\n";
}

void Tire::save(std::ofstream& file) const {
    file << "轮胎类型: " << type << "\n";
    file << "尺寸: " << size << " mm\n";
}
