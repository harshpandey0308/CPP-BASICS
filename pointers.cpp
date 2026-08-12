#include<iostream>
#include<string>

using namespace std;


void wish(const std::string& s = "default" , const int& age = 5){
    cout<<"happy birthday "<<s<<"for your "<<age<<"th birthday"<<'\n';
}

int main(){
    wish();
    wish();
    return 0;

}