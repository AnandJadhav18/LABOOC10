#include<iostream>
#include<string>
using namespace std;

class Employee
{
    private:
    int emp_id;
    string emp_name,emp_designation,emp_branch;
    float emp_salary,emp_gross_salary;

    public:
    void inputDetails(){
        cout<<"Enter Employee name:";
        getline(cin>>ws,emp_name);
        cout<<"Enter Employee id:";
        cin>>emp_id;
        cout<<"Enter Employee designation:";
        getline(cin>>ws,emp_designation);
        cout<<"Enter Employee branch:";
        getline(cin>>ws,emp_branch);
        cout<<"Enter Employee salary:";
        cin>>emp_salary;
    }

    void salary()
    {
        emp_gross_salary=emp_salary+(emp_salary*20/100);
        cout<<"Gross Salary="<<emp_gross_salary<<endl;
    }

    void displayDetails() const{
        cout<<"--------Employee Details----------"<<endl;
        cout<<"Employee Id:"<<emp_id<<endl;
        cout<<"Employee Name:"<<emp_name<<endl;
        cout<<"Employee Designation:"<<emp_designation<<endl;
        cout<<"Employee Branch:"<<emp_branch<<endl;
        cout<<"Employee Salary:"<<emp_salary<<endl;
    }
};

int main()
{
    Employee e;
    e.inputDetails();
    e.displayDetails();
    e.salary();

    return 0;
}