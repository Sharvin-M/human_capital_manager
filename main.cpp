#include <iostream>
#include <memory>

#include "State.hpp"


int main()
{
    new Project ("hello") ;

    std::cout << "welcome!" << std::endl;

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
        std:: cout << curr.getTitle();
    }
    else
    {
        std::cout << "Select a Project to edit: " << std::endl;
    }


    return 0;
}
