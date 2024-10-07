#include "Student.h"

// 构造函数，初始化学生的ID和姓名
Student::Student(const std::string& id, const std::string& name) : student_id(id), student_name(name) {}

// setID方法，用于设置学生ID
void Student::setID(const std::string& id) {
    student_id = id;
}

// setName方法，用于设置学生姓名
void Student::setName(const std::string& name) {
    student_name = name;
}

// print方法，用于将学生信息打印到控制台
void Student::print() const {
    std::cout << "学生ID: " << student_id << std::endl;
    std::cout << "学生姓名: " << student_name << std::endl;
}

// save方法，用于将学生信息保存到文件
void Student::save(std::ofstream& file) const {
    file << "学生ID: " << student_id << "\n";
    file << "学生姓名: " << student_name << "\n";
}
