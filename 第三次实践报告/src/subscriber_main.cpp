
#include "ObstacleSubscriber.h"
#include <iostream>
#include <fstream>
#include <string>
#include <thread>
#include <chrono>

int main() {
    ObstacleSubscriber subscriber;
    std::string line;

    while (true) {
        std::ifstream inFile("obstacle_status.txt");
        if (inFile.is_open()) {
            while (std::getline(inFile, line)) {
                subscriber.onObstacleStatusUpdate(line);
            }
            inFile.close();
        }
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}