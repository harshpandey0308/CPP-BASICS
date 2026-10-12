#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    std::string name = "HARSH";

    cout<<"size of the string = "<<name.size()<<'\n';

    cout<<"capacity of the string = "<<name.capacity()<<'\n';

    cout<<"3rd element is "<<name.at(2);

    return 0;
}
