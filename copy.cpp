#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

class STUDENT{
    private:
        string name , surname;
        string father_name , mother_name;
        size_t roll_number;
        char _class;
        size_t subject;
        int *marks;
    
    public : 
        STUDENT(string name_ , string sur_name , string fatherName , string motherName , 
                size_t rollnumber , char class_ , size_t subject_count):name{name_} , surname(sur_name) , father_name(fatherName) , mother_name(motherName) , 
                roll_number(rollnumber) , _class(class_) , subject(subject_count) , marks(new int[subject_count]) {};
            
        STUDENT(const STUDENT& B):name(B.name) , father_name(B.father_name) , mother_name(B.mother_name) , roll_number(B.roll_number) , _class(B._class) , subject(B.subject) , marks(new int[B.subject]){
             std::copy(B.marks , B.marks + B.subject , marks);
        };

        STUDENT& operator=(const STUDENT& other){
            if(this == &other){
                return *this;
            }

            int *new_marks = new int[other.subject];
            std::copy(other.marks , other.marks + other.subject , new_marks);

            delete[] marks;
            marks = new_marks;
            subject = other.subject;

            return *this;
        };

        void insert_marks(int mark , size_t subject_code){
            if(subject_code >= subject){
                cout<<"invalid subject"<<'\n';
                return;
            }
             marks[subject_code] = mark; 
        }

        void print(){
            cout<<"Name : "<<name<<'\n';
            cout<<"Surname : "<<surname<<'\n';
            cout<<"Father name : "<<father_name<<'\n';
            cout<<"Mother name : "<<mother_name<<'\n';
            cout<<"Roll number : "<<roll_number<<'\n';
            cout<<"Class : "<<_class<<'\n';

            cout<<"======marks======="<<'\n';
            for(size_t i : *marks){
               cout<<i<<'\n';
            }
        }

};

int main(){
    STUDENT s1("Harsh" , "Pandey" , "V.K.Pandey" , "Pratibha Pandey" , 43 , 'x' , 4);

    s1.insert_marks(23 , 1);
    s1.insert_marks(34 , 2);
    s1.insert_marks(49 , 3);

    s1.print();

    STUDENT s3 = s1;

    s3.print();

    STUDENT s2("Avnish" , "Anand" , "Santosh Anand" , "Priya Anand" , 23 , 'x' , 4);

    s2.print();

    s1 = s2;

    s1.print();

}