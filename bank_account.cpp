#include<iostream>
#include<vector>
#include<stdexcept>

using namespace std;

class transaction_logger;

class Bank_Acc{
    private : 
        double balance;

    public : 
        Bank_Acc(double amount){
            if(amount <= 0.00){
                throw std::invalid_argument("Invalid amount");
            }

            balance = amount;
            cout<<"Initial balance : "<<balance<<"$"<<endl;
            
        }

        friend class transaction_logger;

        bool withdraw(double amount){
            if(balance == 0.00){
                cout<<"Insufficient balance"<<endl;
                return false;
            }
            else if(amount > balance){
                cout<<"Insufficient balance"<<endl;
                return false;
            }
            else if(amount <= 0.00){
                cout<<"Invalid amount"<<endl;
                return false;
            }
            else{
                balance = balance - amount;
                cout<<"Amount withdrawal successfull"<<endl;
                return true;
            }

        }

        bool deposit(double amount){
            if(amount <= 0){
                cout<<"Invalid amount"<<endl;
                return false;
            }
            else{
                balance += amount;
                cout<<"deposit successfull"<<endl;
                return true;
            }

        }

        ~Bank_Acc(){
            cout<<"This Bank acoount is closed"<<endl;
        }
};

class transaction_logger{
    private:
        std::vector<double> balance_rec;

    public :
        void update_balance(const Bank_Acc& other){
            balance_rec.push_back(other.balance);
        }

        void display_logger(){
            for(size_t i=0 ; i<balance_rec.size() ; i++){
                cout<<"balance"<<i<<" : "<<balance_rec.at(i)<<"$"<<endl;
            }
        }
};

int main(){
    transaction_logger tl;

    Bank_Acc amit(34000.897); 

    if(amit.deposit(30000)){
        tl.update_balance(amit);
    }

    if(amit.withdraw(1000)){
        tl.update_balance(amit);
    }

    if(amit.withdraw(4000)){
        tl.update_balance(amit);
    }

    if(amit.deposit(5000)){
        tl.update_balance(amit);
    }

    if(amit.deposit(1000)){
        tl.update_balance(amit);
    }

    tl.display_logger();

    return 0;
}