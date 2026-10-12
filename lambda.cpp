#include<iostream>
#include<vector>
#include<algorithm>

// LAMBDA FUNCTION

// lambda function is an anonymous object which let us define behavior locally right where the algorithm needs it . 

int main(){
    int limit = 100;

    std::vector<int> number = {100 , 30 , 40 , 200 , 500};

    auto count = std::count_if(number.begin() , number.end() , [&limit](int number){
                                return number > limit;
                            });

    for(int num : number){
        std::cout<<num<<'\n';
    }

    std::cout<<"count = "<<count<<'\n';

    return 0;

}

