#include<iostream>
#include<algorithm>

using namespace std;

class EMPLOYEE{
    private : 
        string name;
        string position;
        double *salary;

    public : 
        EMPLOYEE(string name_ , string position_ , double salary_) : name(name_) , position(position_) , salary(new double(salary_)){}

        EMPLOYEE(const EMPLOYEE& other) : name(other.name) , position(other.position) , salary(new double(*other.salary)){
            cout<<"address of other "<<other.salary<<'\n';
            cout<<"the address is "<<salary<<'\n';
            cout<<"copy constructor"<<'\n';
        }

        EMPLOYEE(EMPLOYEE&& other): name(other.name) , position(other.position) , salary(other.salary){
                other.salary = nullptr;
                cout<<"the pointer moved from other to new"<<'\n';
        }

        ~EMPLOYEE(){
            delete salary;
        }
};

int main(){
    EMPLOYEE e1("harsh" , "Software engineer" , 50000.89);

    EMPLOYEE e2 = e1;

    EMPLOYEE e3 = std::move(e1);

    return 0;
}

