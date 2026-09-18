#include<iostream>

using namespace std;

class ATM
{
private:

    string cardnumber;

    int pin;

    double balance;

public:

    void setcardnumber(string card)
    {
        cardnumber = card;
    }

    void setpin(int p)
    {
        pin = p;
    }

    void setbalance(double b)
    {
        balance = b;
    }

    bool login(string card, int p)
    {
        if(card == cardnumber && p == pin)
        {
            return true;
        }

        else
        {
            return false;
        }

    }

    void checkbalance()
    {
        cout << "Current Balance: " <<  balance <<  endl;
    }

    void deposit(double amount)
    {

        if(amount > 0)
        {
            balance += amount;

            cout << "Deposit successful!" << endl;

        }

        else
        {
            cout << "Invalid Amount!" <<  endl;
        }

    }

    void withdraw(double amount)
    {

        if(amount <= 0)
        {
            cout << "Invalid Amount!" <<  endl;
        }

        else if(amount > balance)
        {
            cout << "Insufficient Balance!" << endl;
        }

        else
        {
            balance -= amount;

            cout << "Withdrawal successful!" << endl;
        }

    }

    void changepin(int oldpin,int newpin)
    {
        if(oldpin == pin)
        {
            pin = newpin;

            cout << "PIN changed successfully!" << endl;
        }

        else
        {
            cout << "Incorrect PIN!" << endl;
        }

    }

};

int main()
{
    ATM atm;

    string card;

    int pin;

    double balance;

    cout << "Enter Card Number: ";
    cin >>  card;

    cout << "Enter PIN: ";
    cin >> pin;

    cout << "Enter Initial Balance: ";
    cin >> balance;

    atm.setcardnumber(card);
    atm.setpin(pin);
    atm.setbalance(balance);

    system("cls");

    string logincard;
    int loginpin;

    cout << "\nEnter Card Number to login: ";
    cin >> logincard;

    cout << "Enter PIN: ";
    cin >> loginpin;

    if(atm.login(logincard, loginpin))
    {
        cout << "Login successful!" << endl;

        int choice;

        while(true)
        {
            cout << "\n===== ATM MENU =====" << endl;
            cout << "1- Check Balance"<< endl;
            cout << "2- Deposit" << endl;
            cout << "3- Withdraw" <<  endl;
            cout << "4- Change PIN" << endl;
            cout << "5- Exit" << endl;

            cout << "Enter your choice: ";
            cin >> choice;

            if(choice == 1)
            {
                atm.checkbalance();

                system("pause");

                system("cls");
            }

            else if(choice == 2)
            {

                double amount;

                cout << "Enter amount to deposit: ";
                cin >>  amount;

                atm.deposit(amount);

                system("pause");

                system("cls");

            }

            else if(choice == 3)
            {
                double amount;

                cout << "Enter amount to withdraw: ";
                cin >> amount;
                
                atm.withdraw(amount);

                system("pause");

                system("cls");

            }

            else if(choice == 4)
            {
                int oldpin;
                int newpin;

                cout << "Enter old PIN: ";
                cin >>  oldpin;

                cout << "Enter New PIN: ";
                cin >> newpin;

                atm.changepin(oldpin, newpin);

                system("pause");

                system("cls");

            }

            else if(choice == 5)
            {
                cout << "Good Bye!" << endl;

                system("pause");

                return 0;
            }

            else
            {
                cout << "Invalid Choice!" <<  endl;
            }

        }

    }

    else
    {
        cout << "Invalid Card number or PIN!" << endl;
    }

    return 0;
}