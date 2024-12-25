//
// Created by Sharvin on 12/24/24.
//
//EMPLOYEE_HPP
#pragma once

class Employee
{
    //private data members
    int         monthlySalary;
    std::string name;
    std::string contact;
    std::string department;

public:
    // the constructor is explicit because it has 1 arg
    explicit Employee(std::string name_)
    {
        name = name_;
    }

    // constructor that requires all args possible
    Employee(std::string name_, std::string contact_, std::string department_, int monthlySalary_)
    {
        name =          name_;
        contact =       contact_;
        department =    department_;
        monthlySalary = monthlySalary_;
    }

    std::string getName()           { return name; }
    std::string getContact()        { return contact; }
    std::string getDepartment()     { return department; }
    int getMonthlySalary()          { return monthlySalary; }
};
