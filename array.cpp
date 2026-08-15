#include<array>    // It is a standard library , provides array and its helping functions.
#include<iostream>  // It is a basic standard library , which provides output and input handlers.

int main(){
    std::array<int , 5> value{20 , 30 , 40 , 50 , 60};  //It is a standard library container , which represents a fixed-size sequence of elements stored contiguously.

    for(int value : value){
        std::cout<<"value = "<<value<<'\n';   //printing the elements of the array value using range-based for loop.
    }


//=======================================================================================================================================

    std::array <int , 5> value1{10 , 70 , 80 , 90 , 100};

    value = value1; // copying elements of array value1 into value through simple assignment.

    for(int value : value){
        std::cout<<"value copied from value1 = "<<value<<'\n';
    }

//========================================================================================================================================

    //finding size of array using size()

    std::cout<<"the size of value is "<<value.size()<<'\n';
    std::cout<<"the size of value1 is "<<value1.size()<<'\n';

//==========================================================================================================================================
    // std::span is a container which is a light weight non owning view of contiguous sequence of object

    return 0;
}