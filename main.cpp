#include <iostream>
#include "Project.hpp"
#include "Employee.hpp"

int main()
{
    // example usage of employee constructor
    std::vector<Employee> workForce =
        {
        Employee("James",
        "james@gmail.com",
        "Sales",
        2000),
        Employee("Sally",
            "sally@yahoo.com",
            "Engineering",
            4000)
        };

    // example usage of project constructor
    Project tradingEngine("tradingEngine", workForce );

    // example usage of getProjectCost method
    std::cout << tradingEngine.getProjectCost() << std::endl;

    return 0;
}
