#include<iostream>
#include<list>

using namespace std;

int main(){
    std::list<int> value{2,4,5,7,1};

    auto it  = value.begin();

    std::advance(it , 2);

    value.insert(it , 3);

    for(int i : value){
        cout<<"the list is "<<i<<'\n';
    }

    return 0;
}