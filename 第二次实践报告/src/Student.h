#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <fstream>
#include <iostream>

class Student {
public:
    // 构造函数
    Student(const std::string& id = "", const std::string& name = "");

    // set方法
    void setID(const std::string& id);
    void setName(const std::string& name);

    // 显示学生信息
    void print() const;

    // 保存学生信息到文件
    void save(std::ofstream& file) const;

private:
    std::string student_id;
    std::string student_name;
};

#endif
