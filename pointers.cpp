#include<iostream>
#include<string>

using namespace std;


void wish(const std::string& s = "default" , const int& age = 5){
    cout<<"happy birthday "<<s<<"for your "<<age<<"th birthday"<<'\n';
}

int add(int a , int b){
    return a+b;
}

int add(int a , int c , int b){
    return (a+b+c);
}

int main(){
    wish();
    wish();

    cout<<"the addition of 2 and 3 is "<<add(2,3)<<'\n';
    cout<<"the addition of 3,4,5 is "<<add(3,4,5)<<'\n';
    return 0;

}