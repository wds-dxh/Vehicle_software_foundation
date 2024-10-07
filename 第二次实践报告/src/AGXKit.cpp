#include "AGXKit.h"
/*
*/
AGXKit::AGXKit(const std::string& model, int ai_performance, int cuda_cores, int tensor_cores, int gpu_memory, int storage_size)
    : model(model), ai_performance(ai_performance), cuda_cores(cuda_cores), tensor_cores(tensor_cores), gpu_memory(gpu_memory), storage_size(storage_size) {}

void AGXKit::setModel(const std::string& model) {
    this->model = model;
}

void AGXKit::setAIPerformance(int ai_performance) {
    this->ai_performance = ai_performance;
}

void AGXKit::setCUDACores(int cuda_cores) {
    this->cuda_cores = cuda_cores;
}

void AGXKit::setTensorCores(int tensor_cores) {
    this->tensor_cores = tensor_cores;
}

void AGXKit::setGPUMemory(int gpu_memory) {
    this->gpu_memory = gpu_memory;
}

void AGXKit::setStorageSize(int storage_size) {
    this->storage_size = storage_size;
}

void AGXKit::print() const {
    std::cout << "AGX Model: " << model << "\n";
    std::cout << "AI Performance: " << ai_performance << " TOPS\n";
    std::cout << "CUDA Cores: " << cuda_cores << "\n";
    std::cout << "Tensor Cores: " << tensor_cores << "\n";
    std::cout << "GPU Memory: " << gpu_memory << " GB\n";
    std::cout << "Storage Size: " << storage_size << " GB\n";
}

void AGXKit::save(const std::string& filename) const {
    std::ofstream file(filename);
    file << model << " " << ai_performance << " " << cuda_cores << " "
         << tensor_cores << " " << gpu_memory << " " << storage_size << "\n";
    file.close();
}
