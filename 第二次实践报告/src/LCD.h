#ifndef LCD_H
#define LCD_H

#include <string>
#include <fstream>
#include <iostream>

class LCD {
public:
    LCD(const std::string& model);
    //默认构造函数
    LCD() : model("液晶显示屏") {}
    void setModel(const std::string& model);
    
    void print() const;
    void save(const std::string& filename) const;

private:
    std::string model;
};

#endif
