//
// Created by Artur on 06/07/2024.
//

#ifndef HOUSETHINGS_TASK_HPP
#define HOUSETHINGS_TASK_HPP

#include <iostream>
#include <ctime>
#include <utility>
enum Tasks_State {
    Planned,
    Working,
    Finished,
};

enum Tasks_Category{
    Todo,
    TodoLater,
    Important,
    Donotforget,

};

class Task{
public:
    Task(std::string name);
    uint ID;
    std::string taskName;
    Tasks_State tasksState;
    std::string taskStartTime;
    std::string taskEndTime;
    std::string taskDate;
    std::string taskdescription;
    Tasks_Category tasksCategory;




};

Task::Task(std::string name) {
    //implement id generator
    taskName = std::move(name);
}


#endif //HOUSETHINGS_TASK_HPP
