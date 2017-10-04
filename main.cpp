#include <iostream>
using namespace std;
struct Employee
{
    int eNumber;
    string eName;
    string Job;
    double Salary;
    double Bonus;
    double TotalSalary;
};
void getDataAndSetSalary(Employee emp[],int nOfEmployees)
{
    for(int e=0;e<nOfEmployees;e++)
    {
        /// set its number
        emp[e].eNumber=e+1;

        cout<<" Enter Employee # "<<emp[e].eNumber<<" Name \n ";
        cin>>emp[e].eName;

        cout<<" Enter Employee Job \n ";
        cin>>emp[e].Job;

        /// setting employees salary
        if(emp[e].Job=="Manager")
        {
            emp[e].Salary=5000;
        }
        else if(emp[e].Job=="Engineer")
        {
            emp[e].Salary=3000;
        }
        else if(emp[e].Job=="Clerk")
        {
            emp[e].Salary=2000;
        }
        else
        {
            emp[e].Salary=1000;
        }

        emp[e].Bonus=0;
        emp[e].TotalSalary=emp[e].Salary+emp[e].Bonus;
    }



}

void setBonus(Employee &emp,double percent)
{
    emp.Bonus+=emp.Salary*percent;

    emp.TotalSalary=emp.Bonus+emp.Salary;
}

void printOutEmployeesData(Employee emp[],int nOfTeam)
{
    /// show all employees
        for(int e=0;e<nOfTeam;e++)
        {
            cout<<"\n\n*************************************\n";

            cout<<"\n Employee # "<<emp[e].eNumber<<"\n\n Name is "<<emp[e].eName<<endl;
            cout<<"\n Job is "<<emp[e].Job<<endl;
            cout<<"\n Salary is "<<emp[e].Salary<<endl;
            cout<<"\n Bonus is "<<emp[e].Bonus<<endl;
            cout<<"\n Salary is "<<emp[e].TotalSalary<<endl;

        }
}
int main()
{
    Employee emp[5];

    getDataAndSetSalary(emp,2);

    setBonus(emp[1],.3);

    printOutEmployeesData(emp,5);

    return 0;
}
