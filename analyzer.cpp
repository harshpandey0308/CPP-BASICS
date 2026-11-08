#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>

using namespace std;

int main(){
    system("cat /proc/meminfo > memory.txt");

    system("pwd");

    std::ifstream file("memory.txt");
    std::string line;

    int i=0;
    while(std::getline(file , line)){
        cout<<"Line "<<i<<" "<<line<<endl;
        i++;
    }

    file.close();

    return 0;
}