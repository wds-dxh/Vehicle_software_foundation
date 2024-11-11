#ifndef BATTERY_H
#define BATTERY_H

#include <string>
#include <fstream>
#include <iostream>

class Battery {
public:
    Battery(const std::string& specification, int charge_time);
    //默认构造函数
    Battery() : specification("24V/15Ah"), charge_time(0) {}
    void setSpecification(const std::string& specification);
    void setChargeTime(int charge_time);
    
    void print() const;
    void save(const std::string& filename) const;

private:
    std::string specification;
    int charge_time;
};

#endif
