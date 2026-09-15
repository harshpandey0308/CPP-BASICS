#include<iostream>

using namespace std;

class Engine{
    public :
        void engine_on(){
            cout<<"Engine started.\n";
        }
};

class Car{
    public:
        void power_on(){
            cout<<"the car's key is on.\n";
            engine_.engine_on();
        }
    
    private: 
        Engine engine_;
};

int main(){
    Car c;

    c.power_on();

    return 0;

}