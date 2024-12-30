//
// Created by Sharvin on 12/24/24.
//
// PROJECT_HPP
#pragma once
#include <map>
#include "Employee.hpp"

class Project
{
    std::string title;
    std::map<int, Employee> members;

public:
    Project(std::string title_)
    {
        title =   title_;
    }

    std::string getTitle()              { return title; }
    Employee getMember(int badgeNumber)
    {

        if (auto itt = members.find(badgeNumber); itt != members.end())
        {
            std::cout << "Employee found: " << itt->second.getName() <<  std::endl;
            return itt->second;
        } else
        {
            std::cerr << "employee not found";
            exit(1);
        }
    }

    int getProjectCost()
    {
        int cost { };
        for (auto itt: members)
        {
            cost += itt.second.getMonthlySalary();
        }
        std::cout << "Project: " << getTitle() << ", Cost: " << cost << std::endl;
        return cost;
    }

    void addMember(Employee employee, int badgeNumber)
    {
        members.emplace(badgeNumber, employee);
    }

    void removeMember(int badgeNumber)
    {
        members.erase(badgeNumber);
    }
};
