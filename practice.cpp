#include<iostream>
#include<list>
#include<string>
#include<map>

using namespace std;

int main(){
    std::list<int> value{2,4,5,7,1};

    auto it  = value.begin();

    std::advance(it , 2);

    value.insert(it , 3);

    for(int i : value){
        cout<<"the list is "<<i<<'\n';
    }

     //==========================================================================================================================
    // STD::MAP<STRING KEY , TYPE VALUE>VAR_NAME

    std::map<std::string , int>ages;

    ages["Harsh"] = 54;
    ages["Nidhi"] = 78;
    ages["Adarsh"] = 90;
    ages["Bhupendra"] = 100;
    ages["Nishi"] = 340;

    return 0;
}