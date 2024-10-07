#ifndef AGX_H
#define AGX_H

#include <string>
#include <fstream>
#include <iostream>

class AGXKit {
public:
    AGXKit(const std::string& model, int ai_performance, int cuda_cores, int tensor_cores, int gpu_memory, int storage_size);
    //默认构造函数
    AGXKit() : model("Unknown"), ai_performance(0), cuda_cores(0), tensor_cores(0), gpu_memory(0), storage_size(0) {}
    void setModel(const std::string& model);
    void setAIPerformance(int ai_performance);
    void setCUDACores(int cuda_cores);
    void setTensorCores(int tensor_cores);
    void setGPUMemory(int gpu_memory);
    void setStorageSize(int storage_size);
    
    void print() const;
    void save(const std::string& filename) const;

private:
    std::string model;
    int ai_performance;
    int cuda_cores;
    int tensor_cores;
    int gpu_memory;
    int storage_size;
};

#endif
