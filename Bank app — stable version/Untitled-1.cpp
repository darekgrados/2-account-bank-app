#include <iostream>
using std::cout, std::cin, std::endl, std::string;

void showMenu() {
    cout << "**********MENU**********" << endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "************************" << endl;
}

int main ()
{   
    // 1 account is option to create new nick and new PIN code, 2 account is account with nick "John" and PIN: '2022'

    cout << "Press \"1\" to create new account,\"2\" to log on existing account\n";
    int accountNum, pin, pinNew, pinJohn = 2022;
    double balance1 = 0, balance2 = 500;
    string nickNew, nick; 
    nick = "John";
    
    do
    {   
        cout << "Choose an option: ";
        cin >> accountNum;
        if (accountNum == 1)
        {
        cout << "Enter your nick: ";
        cin >> nickNew;
        cout << "Set your PIN code: ";
        cin >> pinNew;
        
        system("cls");
        cout << "You are now register!\n";
        cout << "Hello " << nickNew << endl;

        } else if (accountNum == 2)
        cout << "Hello " << nick << endl;
        else 
        cout << "You enter wrong number\n";
    } while (accountNum != 1 && accountNum != 2);

    int counter = 0;

    cout << "You have 3 attempts to log on your account\n";
    do
    {
        cout << counter+1 << ". Enter your PIN to log to bank: ";
        cin >> pin;
        counter++;
    } while (pin != pinNew && pin != pinJohn && counter < 3);
    
    if (counter >= 3)
        cout << "To much wrong attempts, your account is blocked!"; 

    //system("cls");

    if (pin == pinNew)
    {
        cout << "Welcome " << nickNew << " in your bank account" << endl;

        cout << "What operation you want to do?\n";
        int option;
        double balance = 0;
        do {
        showMenu();
        cout << "Option: ";
        cin >> option;

        system("cls");

        switch (option)
        {
        case 1: cout << "Balance is " << balance << "$" << endl; break;
        case 2: cout << "Deposit amount: "; 
            double depositAmount;
            cin >> depositAmount;
            balance += depositAmount;
            break;
        case 3: cout << "Withdraw amount: "; 
            double withdrawAmount;
            cin >> withdrawAmount;
            if (withdrawAmount <= balance)
                balance -= withdrawAmount;
            else
                cout << "Not enough money" << endl;

            break;
        default:
            break;
        }
        } while (option != 4);
    }   else if (pin == pinJohn) {
        cout << "Welcome " << nick << " in your bank account" << endl;
        cout << "What operation you want to do?\n";

        int option;
        double balance = 500;
        do {
        showMenu();
        cout << "Option: ";
        cin >> option;

        system("cls");

        switch (option)
        {
        case 1: cout << "Balance is " << balance << "$" << endl; break;
        case 2: cout << "Deposit amount: "; 
            double depositAmount;
            cin >> depositAmount;
            balance += depositAmount;
            break;
        case 3: cout << "Withdraw amount: "; 
            double withdrawAmount;
            cin >> withdrawAmount;
            if (withdrawAmount <= balance)
                balance -= withdrawAmount;
            else
                cout << "Not enough money" << endl;

            break;
        default:
            break;
        }
        } while (option != 4); 
        cout << "See you again!";
    }

        system("pause>0");
}