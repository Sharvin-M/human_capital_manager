//
// Created by Sharvin on 12/24/24.
//
// PROJECT_HPP
#pragma once
#include "Employee.hpp"

class Project
{
    std::string title;
    std::vector<Employee> members;

public:
    Project(std::string title_, std::vector<Employee> members_)
    {
        title =   title_;
        members = members_;
    }

    std::string getTitle()              { return title; }
    std::vector<Employee> getMembers()  { return members; }

    int getProjectCost()
    {
        int cost { };
        for (Employee s: members)
        {
            cost += s.getMonthlySalary();
        }
        return cost;
    }
};
