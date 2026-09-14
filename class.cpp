#include<iostream>

using namespace std;

class STUDENT{
    private:
       string student_name;
       int rollnumber;
       double student_marks;

    public : 
       STUDENT(string name , int roll_number , double marks) :  student_name(name) , rollnumber(roll_number) , student_marks(marks){};

       void report_card(){
            if(student_marks <=100 && student_marks > 90){
                cout<<"Grade : A+"<<'\n';
                cout<<"Result : Passed"<<'\n';
            }
            else if(student_marks <= 90 && student_marks > 80){
                cout<<"Grades : A"<<'\n';
                cout<<"Result : Passed"<<'\n';
            }
            else if(student_marks <= 80 && student_marks > 70){
                cout<<"Grades : B+"<<'\n';
                cout<<"Result : Passed"<<'\n';
            }
            else if(student_marks <= 70 && student_marks > 60){
                cout<<"Grades : B"<<'\n';
                cout<<"Result : Passes"<<'\n';
            }
            else if(student_marks <= 60 && student_marks > 50){
                cout<<"Grades : C"<<'\n';
                cout<<"Result : Passed"<<'\n';
            }
            else{
                cout<<"Grades : D"<<'\n';
                cout<<"Result : Poor , Need to pay attention on study and do hard work."<<'\n';
            }
       }

       void dispaly(){
            cout<<"Name : "<<student_name<<'\n';
            cout<<"Roll Number : "<<rollnumber<<'\n';
            cout<<"Marks : "<<student_marks<<'\n';
       }

       ~STUDENT(){
        cout<<"All students are done , thank you"<<'\n';
       }
};

int main(){
    STUDENT S("Harsh" , 1 , 67.89);
    S.report_card();
    S.dispaly();
}