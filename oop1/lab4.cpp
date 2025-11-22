// Akmal Yerzakov
// u2510064

#include <iostream>
using namespace std;

int main(){
    int pass;
    cout << "\n----- Task 1: Password Check -----\n";
    cout << "Enter your password: ";
    cin >> pass;
    while (pass != 160207)
    {
        cout << "Incorrect password! Try again: ";
        cin >> pass;
    }
    cout << "Access Granted!" << endl;

    cout << "\n----- Task 2: Average Age -----\n";
    int s_age, ageCounter = 0, total = 0;
    float average;

    cout << "Enter student age (-1 to stop): ";
    cin >> s_age;
    while ( s_age != -1 ) {
        if (s_age < -1){
            cout << "Invalid age. Please try again." << endl;
        } else {
            total += s_age;
            ageCounter = ageCounter + 1;
        }   

          cout << "Enter student age (-1 to stop): ";
          cin >> s_age;
          }
        if ( ageCounter != 0 ) {
          average = (total) / ageCounter;
          cout << "Average age = " << average << endl;
       } else {
        cout << "No valid ages entered." << endl;
       }
       
    cout << "\n----- Task 3: Sum of Digits -----\n";
    int sum = 0;
    int num, number;
    cout << "Enter a number: ";
    cin >> num;
    number = num;

    while (num != 0)
    {
       int last = num % 10;
       sum += last;
      num /= 10;
    }
    cout << "Sum of digits of " << number << " = " << sum << endl;
}