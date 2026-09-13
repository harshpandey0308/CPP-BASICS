#include<iostream>

using namespace std;

class Bank_Account{
    private:
        double balance_{0.00};

    public:
        void deposit(double amount){
            if(amount > 0.0){
                balance_ += amount;
            }
            else{
                cout<<"Invalid amount"<<'\n';
            }
        }

        void withdraw(double amount){
            if(amount <= balance_ && amount > 0){
                balance_ -= amount;
            }
            else{
                cout<<"Invalid amount"<<'\n';
            }

        }

        void check_balance(){
            cout<<"Current balance in the account : $"<<balance_<<'\n';
        }
        
        ~Bank_Account(){
            cout<<"The bank account is closed.\n";
        }

};


int main(){
    double amount_d;
    double amount_withdraw;

    Bank_Account amit;

    amit.check_balance();

    cout<<"Enter the amount to deposit : ";
    cin>>amount_d;
    
    
    amit.deposit(amount_d);

    amit.check_balance();

    cout<<"Enter the amount to withdraw  : ";
    cin>>amount_withdraw;

    amit.withdraw(amount_withdraw);

    amit.check_balance();


}
