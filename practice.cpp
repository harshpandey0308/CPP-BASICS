#include<iostream>
#include<algorithm>
#include<vector>
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

    //=============================================================================================================================
    // SORT ALGORITHM

    std::vector<int> values{3,2,1,6,9,0,2};

    std::sort(values.begin() , values.end());

    cout<<"the sorted elements are : "<<'\n';

    for(int value : values){
        cout<<value<<'\n';
    }

    //==============================================================================================================================
    //FINDING MAXIMUM IN THE GIVEN LIST

    std::vector<int> arr{3,8,1,10,5,7};

    int max = arr[0];

    for(int i=1 ; i<arr.size() ; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    cout<<"The maximum element in the list is "<<max<<'\n';

    //=============================================================================================================================
    //FINDING MINIMUM ELEMENT IN THE LIST

    int min = arr[0];

    for(int j=1 ; j<arr.size() ; j++){
        if(min > arr[j]){
            min = arr[j];
        }
    }

    cout<<"The minimum element in the list is "<<min<<'\n';

    //==============================================================================================================================
    //SEARCHING TARGET ELEMENT IN THE LIST

    int target;

    cout<<"SEARCH THE ELEMENT : "<<'\n';
    cin>>target;

    for(int i=0 ; i<arr.size() ; i++){
        if(target == arr[i]){
            cout<<"THE TARGET ELEMENT IS FOUND AT POSITION "<<i<<'\n';
        }
        else{
            cout<<"not found."<<'\n';
        }
    }


    //==============================================================================================================================
    //SEARCHING USING FIND

    std::vector<int> name{56 , 23 , 12 , 34 , 89};
    
    auto it1 = std::find(name.begin() , name.end() , 12);

    if(it1 != name.end()){
        cout<<"THE "<<*it1<<" IS FOUND"<<'\n';
    }

    return 0;
}