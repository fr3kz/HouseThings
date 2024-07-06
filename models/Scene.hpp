//
// Created by Artur on 06/07/2024.
//

#ifndef HOUSETHINGS_SCENE_HPP
#define HOUSETHINGS_SCENE_HPP

#include <iostream>

class Scene{
public:
    Scene(std::string name,std::string value);
    std::string sceneName;
    std::string sceneValue;
    std::string showScene() const;
};

Scene::Scene(std::string name,std::string value) {
    sceneName = name;
    sceneValue = value;
}

std::string Scene::showScene() const {
    return sceneValue;
}

#endif //HOUSETHINGS_SCENE_HPP
