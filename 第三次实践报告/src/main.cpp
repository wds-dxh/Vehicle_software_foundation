
#include "ObstaclePublisher.h"
#include "ObstacleSubscriber.h"
#include <iostream>
#include <string>

int main() {
    ObstaclePublisher publisher;
    ObstacleSubscriber subscriber;

    publisher.subscribe([&subscriber](const std::string& status) {
        subscriber.onObstacleStatusUpdate(status);
    });

    std::string input;
    while (true) {
        std::cout << "请输入障碍物状态（1: 前方, 2: 左前方, 3: 右前方, q: 退出）: ";
        std::cin >> input;

        if (input == "q") {
            break;
        } else if (input == "1") {
            publisher.publish("前方");
        } else if (input == "2") {
            publisher.publish("左前方");
        } else if (input == "3") {
            publisher.publish("右前方");
        } else {
            std::cout << "无效输入，请重新输入。" << std::endl;
        }
    }

    return 0;
}