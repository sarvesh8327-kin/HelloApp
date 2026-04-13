#include <iostream>
using namespace std;

class Account {
    int accNo;
    string name;
    double balance;

    static int count;  // static variable

public:
    // Constructor
    Account(int a, string n, double b) {
        accNo = a;
        name = n;
        balance = b;
        count++;  // increment when object created
    }

    void display() {
        cout << "Acc No: " << accNo 
             << " Name: " << name 
             << " Balance: " << balance << endl;
    }

    // Static function
    static void showCount() {
        cout << "Total Accounts: " << count << endl;
    }
};

// Initialize static variable
int Account::count = 0;

int main() {
    Account a1(101, "Ram", 1000);
    Account a2(102, "Sam", 2000);

    a1.display();
    a2.display();

    Account::showCount();

    return 0;
}