#include<iostream>

using namespace std;

class Animal{
    public :
        void eat(string name , string food){
            cout<<"The "<<name<<" eats "<<food<<".\n";
        }

        virtual void runs(){
            cout<<"the wild animals like lion runs too fast.\n";
        }
};

class Dog : public Animal{
    public : 
        void bark(){
            cout<<"The dog barks over the visitors.\n";
        }

        void runs(){
            cout<<"the dog runs fast but not as fast as cheetah.\n";
        }
};

int main(){
    
    Animal *a = new Dog();

    a->eat("tommy" , "pedigree");

    a->runs();

    delete a;

    return 0;
}