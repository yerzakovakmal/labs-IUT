// Akmal Yerzakov
// u2510064

#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int a, b, c;
    cout << "=== Task 1: Three Integers ===\n";
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    int sum = a+b+c;
    float avg= sum/3;
    cout << "Sum: " << sum << "\n";
    cout << "Average: " << avg << "\n";

    //smallest
    if (a < b && a < c)
        cout << "Smallest: " << a << "\n";
    else if (b < a && b < c)
        cout << "Smallest: " << b << "\n";
    else
        cout << "Smallest: " << c << "\n";

    //largest
    if (a > b && a > c)
        cout << "Largest: " << a << "\n";
    else if (b > a && b > c)
        cout << "Largest: " << b << "\n";
    else
        cout << "Largest: " << c << "\n";

    cout << "\n=== Task 2: Loan and Discount Eligibility ===\n";
    //task 2
    int age;
    int salary;
    cout << "Enter age: ";
    cin >> age;

    cout << "Enter salary: ";
    cin >> salary;

    if (age > 21 && salary > 500)
        cout << "Loan qualified : " << (age > 21 && salary > 500) << endl;
    else
        cout << "Loan qualified : " << (age > 21 && salary > 500) << endl;

    if (age < 25 || salary < 300)
        cout << "Student Discount qualified : " << (age < 25 || salary < 300) << endl;
    else 
        cout << "Student Discount qualified : " << (age < 25 || salary < 300) << endl;
    

    cout << "\n=== Task 3: Daily Driving Cost ===\n";
    // task 3
    double km;
    double cost;
    double avg_km;
    cout << "Enter kilometers driven per day: ";
    cin >> km;
    cout << "Enter cost per liter of gasoline: ";
    cin >> cost;
    cout << "Enter average km per liter: ";
    cin >> avg_km;

    double total;
    total = (km / avg_km) * cost;
    cout << "Total driving cost per day: " << total << endl;
}


