// Akmal Yerzakov
// u2510064

#include <iostream>
using namespace std;

int main(){
    //task1
    cout << "\n=== TASK1 ===\n";
    int salary;
    double tax, tax_deduction;
    cout << "Enter your salary in USD: ";
    cin >> salary;
    if (salary < 1000)
    {
        cout << "No tax applied" << endl;
    } else if (salary >= 1000 && salary <= 2000) 
    {
        tax = (salary * 20)/100;
        cout << "Tax payable: " << "$" << tax << endl;
    } else if (salary >= 2001 && salary < 3000)
    {
        tax = (salary * 30)/100;
        cout << "Tax payable: " << "$" << tax << endl;
        
    } else {
        tax = (salary * 40)/100;
        cout << "Tax payable: " << "$" << tax << endl;
    }
        tax_deduction = salary - tax;
        cout << "Income after tax deduction: " << "$" << tax_deduction << endl;

    //task2
    cout << "\n=== TASK2 ===\n";
    double x;
    cout << "Enter a number: ";
    cin >> x;

    if (x > 0)
    {
        cout << "The number is Positive" << endl;
    } else if (x == 0) {
        cout << "The number is Zero" << endl;
    } else {
        cout << "The number is Negative" << endl;
    }
    
    //task3 
    cout << "\n=== TASK3 ===\n";
    double a,b,c;
    int grade;
    cout << "Enter hardness: ";
    cin >> a;
    cout << "Enter carbon content: ";
    cin >> b;
    cout << "Enter tensile strength: ";
    cin >> c;

    if (a >= 50 && b <= 0.7 && c >= 5600){
        grade = 10;
    } else if (a >= 50 && b <= 0.7 && c < 5600){
        grade = 9;
    } else if (b <= 0.7 && c >= 5600 && a < 50){
        grade = 8;
    } else if (a >= 50 && c >= 5600 && b > 0.7){
        grade = 7;
    } else if (a >= 50 || b <= 0.7 || c >= 5600){
        grade = 6;
    } else {
        grade = 5;
    }
    cout << "Grade of steel: " << grade << endl;
}
