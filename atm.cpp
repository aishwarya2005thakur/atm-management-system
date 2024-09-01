#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
class Bank {
 private:
 
 string name;
  long accnumber;
 char type[10];
 long long amount = 0;
 long long balance=0;
 public:

  void setvalue()
  { cout << "Enter name\n";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Account number\n";
    cin >> accnumber;
    cout << "Enter Account type\n";
    cin >> type;
    cout << "Enter Balance\n";
     cin >> balance;

    }
 
    void showdata()
{ cout << "Name:" << name << endl;
  cout << "Account No:" << accnumber << endl;
  cout << "Account type:" << type << endl;
  cout << "Balance:" << balance << endl;

    }
 
  void deposit()
 { cout << "\nEnter amount to be Deposited\n";
   cin >> amount; }
 
  void showbal()
 { balance = balance + amount;
   cout << "\nTotal balance is: " << balance;
 }
 
  void withdrawl()
 { int amm_add, avai_balance;
   cout << "Enter amount to withdraw\n";
   cin >> amm_add;
   avai_balance = balance - amm_add;
   cout << "Available Balance is" << avai_balance;
  }
};
int main()
{ Bank b;
  int choice;
    while (1) {
        cout <<"\n\n~WELCOME~\n";   
        cout << "Enter Your Choice\n";
        cout << "\n1. Enter name, Account";
        cout << "number, Account type\n";
        cout << "\n2. Balance Enquiry\n";
        cout << "\n3. Deposit Money\n";
        cout << "\n4. Show Total balance\n";
        cout << "\n5. Withdraw Money\n";
        cout << "\n6. Cancel\n";
        cin >> choice;
 
        switch (choice) {
        case 1:
            b.setvalue();
            break;
        case 2:
            b.showdata();
            break;
        case 3:
            b.deposit();
            break;
        case 4:
            b.showbal();
            break;
        case 5:
            b.withdrawl();
            break;
        case 6:
            exit(1);
            break;
        default:
            cout << "\nInvalid choice made\n";
        }
    }
}