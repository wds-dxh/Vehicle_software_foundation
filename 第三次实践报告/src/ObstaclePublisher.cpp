
#include "ObstaclePublisher.h"

void ObstaclePublisher::subscribe(const std::function<void(const std::string&)>& callback) {
    subscribers.push_back(callback);
}

void ObstaclePublisher::publish(const std::string& obstacleStatus) {
    for (const auto& subscriber : subscribers) {
        subscriber(obstacleStatus);
    }
}