#include <iostream>
using namespace std;
int main() {
    double balance, withdraw, deposit;  //The ATM Functions declared as variables
    balance =0; //Balance variable being set to initial 0
    int input;

    cout <<"1. Check your balance \n"
         <<"2. Deposit money \n"
         <<"3. Make a withdrawal \n"
         <<"4. Exit. Enter 00 to exit \n";
         cin >> input;

         while(input!= -00){
            switch (input){
                case 1 : cout << " The current balance in your account is " << balance<< " euros" <<endl;
                break;
                case 2: cout << " Enter an amount you wish to add to your account" ;
                cin>>deposit;
                balance= balance + deposit;
                cout << "You have deposited " << deposit<< " euros into your account" <<endl;
                break;
                case 3: cout << " Enter an amount you wish to withdraw";
                cin>>withdraw;
                balance = balance - withdraw;
                cout << "You have withdrawn " << withdraw<< " euros from your account" << endl;
                break;
                default: cout << "You have entered in a wrong input" << endl;

            }
            cout<<"Enter an option";
            cin >> input;
         }
}
