#ifndef GYROSCOPE_H
#define GYROSCOPE_H

#include <string>
#include <fstream>
#include <iostream>

class Gyroscope {
public:
    Gyroscope(const std::string& model);
    //默认构造函数
    Gyroscope() : model("Unknown") {}
    void setModel(const std::string& model);
    
    void print() const;
    void save(const std::string& filename) const;

private:
    std::string model;
};

#endif
