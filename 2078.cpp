/*
#include<iostream>
using namespace std;

class Account
 {
private:
int accountNumber;
float balance;
static float minimumBalance;

public:
void readData()
 {
cout << "Enter account number: ";
cin >> accountNumber;

cout << "Enter balance: ";
cin >> balance;
}

void displayData()
 {
cout << "Account Number: " << accountNumber << endl;
cout << "Balance: " << balance << endl;
}

static void displayMinimumBalance()
 {
cout << "Minimum Balance: " << minimumBalance << endl;
}

};

float Account::minimumBalance = 1000.0;

int main()
{
Account a[5];

for (int i = 0; i < 5; i++) {
a[i].readData();
}

for (int i = 0; i < 5; i++) {
a[i].displayData();
}

Account::displayMinimumBalance();

return 0;
}


*/




#include <iostream>
using namespace std;

class Account
{
    int acc_no;
    float balance;
    static int min_balance;

    public:
    void read()
    {
        cout<<"Enter account no : ";
        cin>>acc_no;

        cout<<"Enter balance : ";
        cin>>balance;
    }


    static void read_min_balance()
    {
        cout<<" Enter Minimum balance = ";
        cin>>min_balance;
    }

    static void display_min_balance()
    {
        cout<<"Minimum balance is "<<min_balance<<endl;
    }

    void display()
    {
        cout<<"Account no = "<<acc_no<<endl;
        cout<<"Balance = "<<balance<<endl;
    }
};

int Account::min_balance;

int main()
{
    Account a[5];


    Account::read_min_balance();



    for(int i=0;i<5;i++)
    {
        a[i].read();
    }


    for(int i=0;i<5;i++)
        {
        a[i].display();

        a[i].display_min_balance();
    }
    return 0;
}
