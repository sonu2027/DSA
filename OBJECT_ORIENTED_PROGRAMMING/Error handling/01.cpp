#include <iostream>
using namespace std;

class Customer
{
    string name;
    int balance, acc_no;

public:
    Customer(string name, int balance, int acc_no)
    {
        this->name = name;
        this->balance = balance;
        this->acc_no = acc_no;
    }

    // Deposit
    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << amount << " RS. is credited successfully" << endl;
        }
        else
            throw "Amount should be greater than 0";
    }

    // withdraw
    void withdraw(int amount)
    {
        if (amount <= 0)
            throw runtime_error("Amount should be greater than 0");

        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << amount << " RS. is debited successfully" << endl;
        }
        else
            throw runtime_error("Your balance is low");
    }
};

int main()
{
    Customer c1("Sonu Mondal", 5000, 7);
    try
    {
        c1.deposit(500);
        c1.withdraw(10000);
        c1.deposit(100);
    }
    catch (const runtime_error c)
    {
        cout << "Exception/Error occured: " << c.what();
    }
}