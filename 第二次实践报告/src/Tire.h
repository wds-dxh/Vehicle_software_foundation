#ifndef TIRE_H
#define TIRE_H

#include <string>
#include <fstream>

class Tire {
public:
    void setType(const std::string& type);
    void setSize(int size);
    void print() const;
    void save(std::ofstream& file) const;

private:
    std::string type;
    int size;
};

#endif
