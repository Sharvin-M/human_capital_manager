//
// Created by Sharvin on 12/27/24.
//
//STATE_HPP

#pragma once
#include "Project.hpp"
#include "Employee.hpp"


class State
{
    // TODO add event handler methods

public:
    State();
    inline virtual void welcome();

    virtual void handleUserInput(std::string &s)
    {
    };

};
