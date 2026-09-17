#include<iostream>
#include<stdexcept>
#include<memory>


using namespace std;


int main(){
    auto data = std::make_unique<int[]>(10);

    if(0){
        throw std::runtime_error("Processing failed");
    }

    cout<<"data : "<<data[0]<<'\n';

    return 0;
}