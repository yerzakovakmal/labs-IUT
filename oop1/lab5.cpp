// Akmal Yerzakov
// u2510064

#include <iostream>
using namespace std;

int main() {
    int n, rvrsed = 0, remainder;
    cout << "\n===== Task 1 =====" << endl;
    do
    {
        cout << "Enter a positive integer: ";
        cin >> n;
        if (n <= 0) {
            cout << "Invalid! Please enter a positive integer." << endl;
        }
    } while (n < 0);
    
    int num = n;

    while (num != 0) {
        remainder = num % 10;
        rvrsed = rvrsed * 10 + remainder;
        num /= 10;
    }

    cout << "Reversed Number of " << n << " is: " << rvrsed << endl;

    cout << "\n===== Task 2 =====" << endl;
    int choice, s_mark, sum, h_mark = -1;
    double average, totalMARK = 0, countMarks = 0;
    char again;
    do
    {
        cout << "\n=== MENU ===" << endl;
        cout << "1. Add mark" << endl;
        cout << "2. Show average" << endl;
        cout << "3. Find highest mark" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            do
            {
                cout << "Enter student's mark: ";
                cin >> s_mark;
                if (s_mark < 0 || s_mark > 100)
                {
                    cout << "Invalid mark!" << endl;
                } else {
                    totalMARK += s_mark;
                    countMarks++;
                    if (s_mark > h_mark) {
                        h_mark = s_mark;
                    }
                    cout << "Mark added successfully." << endl;
                }
                cout << "Do you want to add another mark? (y/n) ";
                cin >> again;
                
            } while (again == 'y');
            break;
        case 2:
            cout << "2. Show average" << endl;
            if (s_mark > 0)
            {
                average = totalMARK / countMarks;
                cout << "Average = " << average << endl;
            } else {
                cout << "No mark available!" << endl;
            }     
            break;
        case 3:
            cout << "3. Find highest mark" << endl;
            if (countMarks == 0) {
                cout << "No marks available!" << endl;
            } else {
                cout << "Highest mark: " << h_mark << endl;
            }
            break;
        case 4:
            cout << "Thank you! Program ended." << endl;
            break;
        default:
            cout << "Invalid choice of number! Choose between [1-4]" << endl;
        }
    } while (choice != 4);
    




    cout << "\n===== Task 3 =====" << endl;
    int days = 5;
    double tickets, total = 0.0;

    for (int i = 1; i <= days; i++) {
        cout << "Enter tickets sold for show " << i << ": ";
        cin >> tickets;
        total += tickets;
    }
    double avg = total / days;

    cout << "----------------\n";
    cout << "Total tickets sold today: " << total << endl;
    

    cout << "\n===== Task 4 =====\n";
    int s_row = 9;
    for (int a = s_row/2 + 1; a >= 1; a--){
        for (int space = 1; space < a; space++)
        {
            cout << " ";
        }
        for (int star = 1; star <= s_row - (a-1) * 2; star++)
        {
            cout << "*";
        }
        for (int b = 1; b <= a; b++){
            cout << " ";
        } cout << endl;
        
    }


    cout << "\n===== Task 5 =====\n";
    int n_rows = 5;

    for(int row_c = 1; row_c <= n_rows; row_c++) {
        for (int space = 1; space <= n_rows - row_c; space++) {
        cout << " ";
        }
        for(int number = 1; number <= row_c; number++) {
            cout << number;
        }
        cout << endl;
    }

}
