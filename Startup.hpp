//
// Created by Sharvin on 12/27/24.
//
//STARTUP_HPP
#pragma once

inline void begin()
{
    std::cout << "welcome!" << std::endl;

    // TODO: check for login access level, default admin

    std::cout << "select an option by typing a number" << std::endl;

    std::cout <<"option 1: create a new project" << std::endl;
    std::cout <<"option 2: edit a current project" << std::endl;

    std::string input;
    std::unique_ptr<std::string> ptrInput = new std::string s;
    std::cin >> input;

    if ( *ptrInput == "1" )
    {
        std::cout << "hello";
    }
    else
    {
        std::cout << "bye";
    }
}
