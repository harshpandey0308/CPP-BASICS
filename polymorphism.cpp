#include<iostream>

using namespace std;

class Animal{
    private:
        string name_;
        string type_;

    public:
        void sound(){
            cout<<"every animal has its own sound.\n";
        }

        void sound(string name , string type){
            cout<<"the "<<name<<" makes "<<type<<" type sound.\n";
        }

};

class Dog : public Animal{
    void bark(string name){
        cout<<"the "<<name<<" barks on the strangers.\n";
    }

    private:
        string type;
};

int main(){

    Animal *a = new Animal();

    a->sound();
    a->sound("dog" , "meow meow");

    return 0;

}