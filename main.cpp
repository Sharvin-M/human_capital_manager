#include <iostream>
#include "State.hpp"


int main()
{
    std::cout << "welcome!" << std::endl;

    // TODO: update state based on auth, default admin

    std::cout << "select an option by typing a number" << std::endl;
    std::cout <<"option 1: create a new project" << std::endl;
    std::cout <<"option 2: edit a current project" << std::endl;

    std::string input;
    std::cin >> input;

    int optNum = std::stoi(input);
    if (optNum == 1)
    {
        std::string title;
        std::cout << "Enter a title for your new project: " << std::endl;
        std::cin >> title;
        Project curr(title);
    }
    else
    {
        std::cout << "Select a Project to edit: " << std::endl;
    }

    // curr.handleUserInput(input);

    return 0;
}
