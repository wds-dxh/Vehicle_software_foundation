
#include "ObstacleSubscriber.h"
#include <iostream>

void ObstacleSubscriber::onObstacleStatusUpdate(const std::string& obstacleStatus) {
    if (obstacleStatus == "前方") {
        std::cout << "后退..." << std::endl;
    } else if (obstacleStatus == "右前方") {
        std::cout << "左转..." << std::endl;
    } else if (obstacleStatus == "左前方") {
        std::cout << "右转..." << std::endl;
    }
}