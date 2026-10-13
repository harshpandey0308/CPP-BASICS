#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    std::string name = "Harsh";

    cout<<"size of the string = "<<name.size()<<'\n';

    cout<<"capacity of the string = "<<name.capacity()<<'\n';

    cout<<"3rd element is "<<name.at(2)<<'\n';

    auto it = name.begin();

    name.append(" Kumar");

    cout<<"name : "<<name<<'\n';

    cout<<"name : "<<*it<<'\n';

    while(it != name.end()){
        cout<<*it<<'\n';
        it++;
    }

    return 0;
}
