//Akmal Yerzakov u2510064

#include <iostream>
using namespace std;

int GCD(int a, int b){
    if(a == 0)
        return b;
    return GCD(b % a, a);
}

void withdraw(double &balance, double amount){
    balance -= amount;
    cout << "\nWithdrawal successful." << endl;
    cout << " --> Remaining balance: " << balance  << " <--"<< endl;
    cout << "We will be waiting for your comeback!" << endl;
}

void addBonus(int &grade, int bonus){
    if (grade + bonus > 100)
    {
        cout << " --> Grade: " << grade << " <--" << endl;
        cout << "P.S: No bonus was applied because the Maximum grade is reached or will exceed!" << endl;
    } else{
        grade += bonus;
        cout << "\nBonus applied." << endl;
        cout << " --> Updated grade: " << grade << endl;
    }
}

int main(){
    int choice, a, b;
    do
    {
        cout << "\n==== MENU ====" << endl;
        cout << "1. G.C.D (recursive)" << endl;
        cout << "2. Banking" << endl;
        cout << "3. Grading" << endl;
        cout << "4. Exit" << endl;
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        do {
            cout << "Enter two positive integers: ";
            cin >> a >> b;
            if (a <= 0 || b <= 0)
                cout << "Invalid data! Try again." << endl;
            else
                cout << "\n --> G.C.D = " << GCD(a, b) << " <--" << endl;
        } while(a <= 0 || b <= 0);
        break;

        case 2:
        double balance, amount ;
            do
            {
                cout << "Enter current balance: ";
                cin >> balance;
                if (balance < 0) {
                    cout << "Invalid data! Try again." << endl;
                    continue;
                }
            } while(balance < 0);
            do 
            {
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount < 0){
                    cout << "Invalid data! Try again." << endl;
                    continue;
                }
                if (amount > balance) {
                    cout << "AMOUNT cannot be greater than BALANCE!" << endl;
                    continue;
                }

                withdraw(balance, amount);
                break;
            } while(true);
            break;

        case 3:
        int grade, bonus;
        do {
            cout << "Enter current grade (0--100): ";
            cin >> grade;
            if (grade < 0 || grade > 100)
            {
                cout << "Invalid data! Try again." << endl;
                continue;
            }else
                cout << "Enter bonus points: ";
                cin >> bonus;
                addBonus(grade, bonus);
        }while(grade < 0 || grade > 100);
        break;
        case 4:
            cout << "Thank you! Program ended" << endl;
            break;
        default:
            cout << "Invalid choice! Choose between[1-4]" << endl;
        }
    } while (choice != 4);
}