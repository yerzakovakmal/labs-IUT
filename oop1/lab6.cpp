// u2510064
// Akmal Yerzakov

#include <iostream>
using namespace std;
//task 1
void ctime(int totalSeconds) {
    int hours = totalSeconds / 3600;
    int remsec = totalSeconds % 3600;
    int mins = remsec / 60;
    int sec = remsec % 60;
    cout << hours << " hour " << mins << " minute " << sec << " seconds" << endl;
}


//task 2
void convert(double amount, double rate){
    double t = amount * rate;
    cout << "Converted amount: " << t << endl;
}

void showMenu() {
    cout << "\n==== BILLING SYSTEM ====" << endl;
    cout << "1. Add items" << endl;
    cout << "2. Show totals" << endl;
    cout << "3. Exit" << endl;
}

double total(double price, double quant, double discPercent, double &sTotal, double &disc) {
    sTotal = price * quant;
    disc = sTotal * (discPercent / 100);
    double totToPay = sTotal - disc;

    cout << "Added -> total=" << sTotal << ", discount=" << disc << ", Total after discount=" << totToPay << endl;
    return totToPay;
}

void displayResult(double grandTot, double totbefdisc, double totaldisc) {
    cout << "\nTotal (before discounts): " << totbefdisc << endl;
    cout << "Total discounts: -" << totaldisc << endl;
    cout << "Total (to pay): " << grandTot << endl;
}
    


int main(){
//task1
    int totalSeconds;
    cout << "\n=== Task 1 ===\n";
    do {
        cout << "Enter total seconds: ";
        cin >> totalSeconds;
        if (totalSeconds < 0){
            cout << "Please enter a non-negative number of seconds." << endl;
        } else {
            ctime(totalSeconds);
        }
    } while(totalSeconds < 0);

//task 2
    double amount, rate;
    char again;
    cout << "\n=== Task 2 ===\n";
    do
    {
        cout << "Enter amount: ";
        cin >> amount;
        cout << "Enter exchange rate: ";
        cin >> rate;
        convert(amount, rate);
        cout << "Do another conversion? (y/n): ";
        cin >> again;
    } while (again == 'y'|| again == 'Y');
    cout << "\nThank you! Program ended." << endl;

//task 3
    int choice;
    double price, quant, discPercent, sTotal, disc;
    double tottoPay, grandTot = 0, totbefdisc = 0, totdisc = 0;
    char redo;

    do {
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                do {
                    cout << "\nUnit price: ";
                    cin >> price;
                    cout << "Quantity: ";
                    cin >> quant;
                    cout << "Item discount (% 0-100): ";
                    cin >> discPercent;
                    tottoPay = total(price, quant, discPercent, sTotal, disc);
                    grandTot += tottoPay;
                    totbefdisc += sTotal;
                    totdisc += disc;

                    cout << "Add another item? (y/n): ";
                    cin >> redo;
                } while (redo == 'y' || redo == 'Y');
                break;
            case 2:
                displayResult(grandTot, totbefdisc, totdisc);
                break;
            case 3:
                cout << "\nThank you! Program ended." << endl;
                break;
            default:
                cout << "\nInvalid choice! Please use numbers from 1 to 3.\n";
            }
    } while (choice != 3);
}


