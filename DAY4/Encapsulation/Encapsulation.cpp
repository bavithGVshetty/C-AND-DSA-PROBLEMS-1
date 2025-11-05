// Encapsulation

// Wrapping data and functions inside a single unit.
// To implement enc we need classes
// Controll Access:Private,Public and Protected

// BANK MINI PROJECT

#include <iostream>
using namespace std;
#include<iomanip>
class BankAccount
{
private:
    string accountHolder;
    int accountNumber;
    double balance;

protected:
    double interestRate;

public:
    BankAccount(string name, int accNo, double bal)
    {
        accountHolder = name;
        accountNumber = accNo;
        balance = bal;
        interestRate = 5.0;
    }

    // Adding Getters and Setters
    string getAccountHolder(int pin)
    {
        if (pin == 123)
        {
            return accountHolder;
        }

        else
        {
            return "Access Denied! Invalid Pin";
        }
    }
    int getAccountNumber()
    {
        return accountNumber;
    }
    double getbalance()
    {
        return balance;
    }
    double interestRateCheck()
    {
        return interestRate;
    }

    // Setters
    void setName(string name){
        name=accountHolder;
    }

    void setAccountNumber(int acc){
        accountNumber=acc;
    }
    void setBalance(double balance){
        balance=balance;
    }


    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance = balance + amount;
            cout << "Deposited: " << amount << "| New Balance: " << balance << endl;
            // cout<<accountHolder<<endl;
        }
        else if (amount > 20000)
        {
            cout << "Your are Too much...Add below 20000";
        }

        else
        {
            cout << "GO man Bring some money";
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance = balance - amount;
            cout << "WithDrawn" << amount << "| The remaining balance" << balance << endl;
        }
        else
        {
            cout << "Insufficient balance\n"
                 << endl;
        }
    }
    void CheckBalance()
    {
        cout << "Account Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b1("Bavith", 12345, 100);
    b1.CheckBalance();
    b1.deposit(20);
    b1.withdraw(10);
    int pin = 100;
    cout<<"The account Holder name:"<<b1.getAccountHolder(pin)<<endl;
    cout<<fixed<<setprecision(1);
    cout<<"The rate of interest is: "<<b1.interestRateCheck()<<endl;

}