#include<iostream>

using namespace std;

class Animal{
    public : 
        virtual void sound() = 0;
};

class Dog : public Animal{
    void sound() override{
        cout<<"the dog barks\n";
    }
};

int main(){
    Animal *a = new Dog();

    a->sound();



    return 0;
}
