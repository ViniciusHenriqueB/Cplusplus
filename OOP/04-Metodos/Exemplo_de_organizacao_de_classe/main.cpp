#include <iostream>
#include "account.hpp"

using namespace std;

int main() {
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000);


    if (frank_account.deposit(200)) 
        cout << "Deposit ok" << endl;
    else
        cout << "Deposit not allowed" << endl;


    if (frank_account.withdraw(500))
        cout << "Withdraw ok" << endl;
    else
        cout << "No suficient funds" << endl;
    

    if (frank_account.withdraw(1500))
        cout << "Withdraw ok" << endl;
    else
        cout << "No suficient funds" << endl;

    return 0;
}