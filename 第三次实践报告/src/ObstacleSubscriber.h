
#ifndef OBSTACLE_SUBSCRIBER_H
#define OBSTACLE_SUBSCRIBER_H

#include <string>

class ObstacleSubscriber {
public:
    void onObstacleStatusUpdate(const std::string& obstacleStatus);
};

#endif // OBSTACLE_SUBSCRIBER_H