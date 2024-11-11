/*
 * @Author: wds-wsl_ubuntu22 wdsnpshy@163.com
 * @Date: 2024-11-11 18:34:08
 * @LastEditors: wds-wsl_ubuntu22 wdsnpshy@163.com
 * @LastEditTime: 2024-11-11 18:34:10
 * @FilePath: /第三次实践报告/src/ObstaclePublisher.h
 * @Description: 
 * 微信: 15310638214 
 * 邮箱：wdsnpshy@163.com 
 * Copyright (c) 2024 by ${wds-wsl_ubuntu22}, All Rights Reserved. 
 */

#ifndef OBSTACLE_PUBLISHER_H
#define OBSTACLE_PUBLISHER_H

#include <vector>
#include <string>
#include <functional>

class ObstaclePublisher {
public:
    void subscribe(const std::function<void(const std::string&)>& callback);
    void publish(const std::string& obstacleStatus);

private:
    std::vector<std::function<void(const std::string&)>> subscribers;
};

#endif // OBSTACLE_PUBLISHER_H