//
// Created by Sharvin on 12/24/24.
//
// EMPLOYEE_HPP
#pragma once

class Employee
{
    // data members are encapsulated by default because of class
    int         badgeNumber;
    int         monthlySalary;
    std::string name;
    std::string contact;
    std::string department;

public:

    // constructor with minimum args for Employee
    Employee( int badgeNumber_, int monthlySalary_, std::string name_ )
    {
        badgeNumber =   badgeNumber_;
        monthlySalary = monthlySalary_;
        name =          name_;
        contact = "";
        department = "";
    }

    // constructor with maximum args for Employee
    Employee( int badgeNumber_, int monthlySalary_, std::string name_,
        std::string contact_, std::string department_ )
    {
        badgeNumber =   badgeNumber_;
        monthlySalary = monthlySalary_;
        name =          name_;
        contact =       contact_;
        department =    department_;
    }

    // getter methods becuase the data members are encapsulated
    int getBadgeNumber()            { return badgeNumber; }
    int getMonthlySalary()          { return monthlySalary; }
    std::string getName()           { return name; }
    std::string getContact()        { return contact; }
    std::string getDepartment()     { return department; }
};
