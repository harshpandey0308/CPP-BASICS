#include<iostream>

using namespace std;

class POINT{
    public:
       POINT(){
        cout<<"The point is created with default coordinates.\n";
       }

       POINT(double longi) : x_longi{longi}{
        cout<<"The point is created with longitude = "<<longi<<" and latitude = "<<y_latit<<'\n';
       }

       POINT(double longi , double latit) : x_longi{longi} , y_latit{latit}{
        cout<<"The point is created with longitude = "<<x_longi<<" and latitude = "<<y_latit<<'\n';
       }

       ~POINT(){
        cout<<"The point is destroyed.\n";
       }

    private :
       double x_longi{0.0};
       double y_latit{0.0};
};


class ARRAY{
    private:
        int *arr;

    public:
        int *allocation(size_t size){
            arr = new int(size);

            if(arr == NULL){
                cout<<"the array allocation is failed.\n";
                return NULL;
            }
            printf("the array allocated successfully.\n");
            return arr;
        }

        ~ARRAY(){
            delete arr;
            cout<<"the array is destroyed.\n";
        }
    
};

int main(){
    POINT P;

    POINT D(3.44);

    POINT E(3.44 , 5.67);

    ARRAY a;

    a.allocation(5);

    return 0;
}