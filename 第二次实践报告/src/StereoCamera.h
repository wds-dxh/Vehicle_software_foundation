#ifndef STEREOCAMERA_H
#define STEREOCAMERA_H

#include <string>

class StereoCamera {
public:
    // Constructors
    StereoCamera();
    StereoCamera(const std::string& model, const std::string& resolution, int frame_rate);

    // Set methods for each attribute
    void setModel(const std::string& model);
    void setResolution(const std::string& resolution);
    void setFrameRate(int frame_rate);

    // Print camera information
    void print() const;

    // Save camera information to a file
    void save(const std::string& filename) const;

private:
    std::string model;
    std::string resolution;
    int frame_rate;
};

#endif // STEREOCAMERA_H
