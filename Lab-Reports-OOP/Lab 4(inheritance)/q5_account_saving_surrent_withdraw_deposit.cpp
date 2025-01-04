/*Qno5:Create class Account that have data member customer_name, account_number, account_type.
From this class derive the classes Saving_account and current_account make it more specific to
need, include necessary member function to perform the following task.
a) Accept the deposit from the user and update account
b) Display the balance
c) Update the account after every withdraw*/
#include <iostream>
#include <string>
using namespace std;

class Account
{
protected:
    string customer_name;
    long account_number;
    string account_type;
    float balance;
};

class Saving_account : protected Account
{
public:
    Saving_account()
    {
        balance = 100000; // Set initial balance to 100000
    }

    void getDeposit()
    {
        float userInput = 0;
        cout << "Q)Enter the amount you want to deposit : ";
        cin >> userInput;
        balance += userInput;
        cout << "-> Your deposit has been received, Your new balance is " << balance << endl;
    }

    void displayBalance()
    {
        cout << "-> Your current balance is : " << balance << endl;
    }

    void withdrawMoney()
    {
        float userInput = 0;
        cout << "Q)Enter the amount you want to withdraw : ";
        cin >> userInput;
        balance -= userInput;
        cout << "-> Rs." << userInput << " has been withdrawn, your new balance is : " << balance << endl;
    }
};

class Current_account : protected Account
{
public:
    Current_account()
    {
        balance = 100000; // Set initial balance to 100000
    }

    void getDeposit()
    {
        float userInput;
        cout << "Q)Enter the amount you want to deposit : ";
        cin >> userInput;
        balance += userInput;
        cout << "-> Your deposit has been received, Your new balance is " << balance << endl;
    }

    void displayBalance()
    {
        cout << "-> Your current balance is : " << balance << endl;
    }

    void withdrawMoney()
    {
        float userInput = 0;
        cout << "Q)Enter the amount you want to withdraw : ";
        cin >> userInput;
        balance -= userInput;
        cout << "-> Rs." << userInput << " has been withdrawn, your new balance is : " << balance << endl;
    }
};

int main()
{
label1:
    int userInput;
    cout << "Q)Select the type of Account : " << endl;
    cout << "1.Saving\t\t2.Current" << endl;
    cin >> userInput;
    if (userInput == 1)
    {
        Saving_account s1;
        int userInput1;
        cout << "-> Welcome to your savings account : " << endl
            << "Q)Select your purpose : " << endl
            << "1.Deposit\t\t2.Withdraw" << endl;
    label3:
        cin >> userInput1;
        if (userInput1 == 1)
        {
            s1.getDeposit();
        }
        else if (userInput1 == 2)
        {
            s1.withdrawMoney();
        }
        else
        {
            cout << "XXX Invalid input XXX, please select again : " << endl;
            goto label3;
        }
    }
    else if (userInput == 2)
    {
        Current_account c1;
        int userInput2;
        cout << "-> Welcome to your current account : " << endl
            << "Q)Select your purpose : " << endl
            << "1.Deposit\t\t2.Withdraw" << endl;
    label4:
        cin >> userInput2;
        if (userInput2 == 1)
        {
            c1.getDeposit();
        }
        else if (userInput2 == 2)
        {
            c1.withdrawMoney();
        }
        else
        {
            cout << "XXX Invalid input XXX, please select again : " << endl;
            goto label4;
        }
    }
    else
    {
        cout << "XXX Invalid input XXX, please select again : " << endl;
        goto label1;
    }

label2:
    char userChoice;
    cout << endl
        << "Q)Would you like to use more options (y/n) : ";
    cin >> userChoice;
    if (userChoice == 'y' || userChoice == 'Y')
    {
        goto label1;
    }
    else if (userChoice == 'n' || userChoice == 'N')
    {
        cout << "***Thank you for using our service.***";
    }
    else
    {
        cout << "XXX Invalid input XXX, please select again : " << endl;
        goto label2;
    }
    return 0;
}
