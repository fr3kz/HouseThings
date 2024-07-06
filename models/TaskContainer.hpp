//
// Created by Artur on 06/07/2024.
//

#ifndef HOUSETHINGS_TASKCONTAINER_HPP
#define HOUSETHINGS_TASKCONTAINER_HPP

#include <iostream>
#include <vector>
#include "Task.hpp"

class TaskContainer {
public:
    TaskContainer();
    bool *isEmpty=&_isempty;
    std::vector<Task>* getTaskList();
    void insertTask(Task task);
private:
    std::vector<Task> _tasks;
    bool _isempty;

};

std::vector<Task> *TaskContainer::getTaskList() {
    _isempty = _tasks.empty();
   return &_tasks;
}

void TaskContainer::insertTask(Task task) {
    _tasks.push_back(std::move(task));
}

TaskContainer::TaskContainer() {
    _isempty = false;
}


#endif //HOUSETHINGS_TASKCONTAINER_HPP
