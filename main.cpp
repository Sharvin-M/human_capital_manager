#include <iostream>
#include "Project.hpp"
#include "Employee.hpp"

// example uses of the current system

int main()
{
    std::cout << "hello world" << std::endl;

    Employee Bob(111, 1000, "bob");

    Project Main("finance etl pipeline");

    Main.addMember(Bob, 111 );

    Main.getMember(111);

    Main.getProjectCost();
    return 0;
}
