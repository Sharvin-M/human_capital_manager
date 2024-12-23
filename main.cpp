#include <iostream>

class Employee
{
    //private data members
    std::string name;
    std::string contact;
    std::string department;
    int salaryMonthly { };

public:
    explicit Employee(std::string name_)
    {
        name = name_;
    }
    Employee(std::string name_, std::string contact_, std::string department_, int salaryMonthly_)
    {
        name = name_;
        contact = contact_;
        department = department_;
        salaryMonthly = salaryMonthly_;
    }
    std::string getName() { return name; }
    std::string getContact() { return contact; }
    std::string getDepartment() { return department; }
    int getsalaryMonthly() {return salaryMonthly; }
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

    std::string getTitle() { return title; }
    std::vector<Employee> getMembers(){ return members; }
    int getProjectCost()
    {
        int cost {};
        for (Employee s: members)
        {
            cost += s.getsalaryMonthly();
        }
        return cost;
    }
};


int main()
{
    // example usage

    std::vector<Employee> workforce = {Employee("James", "james@gmail.com", "Sales", 2000)};

    Project tradingEngine("tradingEngine", workforce );

    std::cout << tradingEngine.getProjectCost() << std::endl;

    return 0;
}
