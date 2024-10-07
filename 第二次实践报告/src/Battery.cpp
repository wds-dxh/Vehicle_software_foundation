#include "Battery.h"

Battery::Battery(const std::string& specification, int charge_time) : specification(specification), charge_time(charge_time) {}

void Battery::setSpecification(const std::string& specification) {
    this->specification = specification;
}

void Battery::setChargeTime(int charge_time) {
    this->charge_time = charge_time;
}

void Battery::print() const {
    std::cout << "Battery Specification: " << specification << ", Charge Time: " << charge_time << " hours\n";
}

void Battery::save(const std::string& filename) const {
    std::ofstream file(filename);
    file << specification << " " << charge_time << "\n";
    file.close();
}
