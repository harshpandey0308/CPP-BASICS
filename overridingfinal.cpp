#include<iostream>

using namespace std;

class Animal{
    public:
       virtual void name(string name){
           cout<<"the name of the animal is "<<name<<'\n';
       }

    private:
       string ani_name; 
};

class Dog : public Animal{
    public :
        void name(string dog_name) final{
            cout<<dog_name<<" barks"<<'\n';
        }
};

class Tommy{
    public : 
        void name_(){
            cout<<"tommy likes sweet.\n";
        }
};

int main(){
    Animal *a = new Dog();

    a->name("TOMMY");

    Tommy d;

    d.name_();
    return 0;
}
