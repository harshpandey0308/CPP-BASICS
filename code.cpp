#include<iostream>
#include<string.h>


using namespace std;

int Binary_search(int arr[] , int target , int low , int high){

    if(low<=high){
        int mid = (low + high)/2;
        if(target == arr[mid]){
            return mid;
        }
        else if(target < arr[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
        return Binary_search(arr , target , low , high);
    }
    else{
        return -1;
    }
    
}

int main(){
    int arr[] = {2 , 4 , 5 , 6 , 7 , 1 , 0  , 34 };

    int n = sizeof(arr)/sizeof(arr[0]);

    int target;
    cout<<"Enter the target element:"<<endl;
    cin>>target;
    cout<<endl;

    int low = 0;
    int high = n-1;

    int result;

    result = Binary_search(arr , target , low , high);
    
    if(result == -1){
        cout<<"The target element is not found.\n";
    }
    else{
        cout<<"The target element is found at "<<result<<endl;
    }

}