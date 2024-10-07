#ifndef LIDAR_H
#define LIDAR_H

#include <string>
#include <fstream>
#include <iostream>

class Lidar {
public:
    Lidar(const std::string& model);
    //默认构造函数
    Lidar() : model("Unknown") {}
    void setModel(const std::string& model);
    
    void print() const;
    void save(const std::string& filename) const;

private:
    std::string model;
};

#endif
