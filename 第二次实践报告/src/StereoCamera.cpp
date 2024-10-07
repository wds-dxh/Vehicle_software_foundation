#include "StereoCamera.h"
#include <iostream>
#include <fstream>

// Default constructor
StereoCamera::StereoCamera() : model("Unknown"), resolution("Unknown"), frame_rate(0) {}

// Parameterized constructor
StereoCamera::StereoCamera(const std::string& model, const std::string& resolution, int frame_rate)
    : model(model), resolution(resolution), frame_rate(frame_rate) {}

// Set methods
void StereoCamera::setModel(const std::string& model) {
    this->model = model;
}

void StereoCamera::setResolution(const std::string& resolution) {
    this->resolution = resolution;
}

void StereoCamera::setFrameRate(int frame_rate) {
    this->frame_rate = frame_rate;
}

// Print method
void StereoCamera::print() const {
    std::cout << "Stereo Camera Model: " << model << "\n";
    std::cout << "Resolution: " << resolution << "\n";
    std::cout << "Frame Rate: " << frame_rate << " fps\n";
}

// Save method
void StereoCamera::save(const std::string& filename) const {
    std::ofstream file(filename);
    if (file.is_open()) {
        file << "Stereo Camera Model: " << model << "\n";
        file << "Resolution: " << resolution << "\n";
        file << "Frame Rate: " << frame_rate << " fps\n";
        file.close();
    } else {
        std::cerr << "Unable to open file for saving camera information.\n";
    }
}
