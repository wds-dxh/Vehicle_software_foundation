#ifndef CHASSIS_H
#define CHASSIS_H

#include <string>
#include <fstream>

class Chassis {
public:
    void setModel(const std::string& model);
    void setWheelbase(int wheelbase);
    void setTrackWidth(int track_width);
    void print() const;
    void save(std::ofstream& file) const;

private:
    std::string model;
    int wheelbase;
    int track_width;
};

#endif
