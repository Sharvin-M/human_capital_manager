#include <iostream>

class Employee
{
    //private data members
    int monthlySalary { };
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
        name = name_;
        contact = contact_;
        department = department_;
        monthlySalary = monthlySalary_;
    }

    std::string getName()           { return name; }
    std::string getContact()        { return contact; }
    std::string getDepartment()     { return department; }
    int getMonthlySalary()          { return monthlySalary; }
};

class Project
{
    std::string title;
    std::vector<Employee> members;

public:
    Project(std::string title_, std::vector<Employee> members_)
    {
        title = title_;
        members = members_;
    }

    std::string getTitle()              { return title; }
    std::vector<Employee> getMembers()  { return members; }

    int getProjectCost()
    {
        int cost {};
        for (Employee s: members)
        {
            cost += s.getMonthlySalary();
        }
        return cost;
    }
};

int main()
{
    // example usage of employee constructor
    std::vector<Employee> workForce = {Employee("James", "james@gmail.com", "Sales", 2000)};

    // example usage of project constructor
    Project tradingEngine("tradingEngine", workForce );

    // example usage of getProjectCost method
    std::cout << tradingEngine.getProjectCost() << std::endl;

    return 0;
}
