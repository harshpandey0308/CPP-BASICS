#include<iostream>

using namespace std;

class Student{
    private:
        string _name;
        int _roll_no;

    public:
        Student(const string &name , int roll_no) : _name{name} , _roll_no{roll_no}{};

        void change_name(string s){
            _name = s;
        }

        void change_rollno(int r){
            _roll_no = r;
        }

        void display(){
            cout<<"name : "<<_name<<'\n';
            cout<<"roll no "<<_roll_no<<'\n';
        }

        ~Student(){
            cout<<"Object Student is destroyed.\n"<<'\n';
        }
};

int main(){
    Student s("Harsh" , 45);

    Student b = s;

    s.display();
    
    s.change_name("Vaibhav");

    s.change_rollno(34);

    s.display();

    b.change_name("Aniket");

    b.display();
}