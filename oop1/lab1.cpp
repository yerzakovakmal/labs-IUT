//u2510064 Yerzakov Akmal

#include <iostream>
using namespace std;

// task 1
int main(){
    int i= 42;
    float f = 3.14;
    double d = 3.14159;
    char c = 'A';
    bool b = true;
    
    cout << "=== Task 1: Identify and Print Data Types ===\n";
    cout << "Integer: " << i << "\n";
    cout << "Float: " << f << "\n";
    cout << "Double: " << d << "\n";
    cout << "Character: " << c << "\n";
    cout << "Boolean: " << b << "\n" << endl;
// task 2
    cout << "=== Task 2: Type Sizes ===\n";
    cout << "int \t\t" << sizeof(int) << "\n";
    cout << "short \t\t" << sizeof(short) << "\n";
    cout << "long \t\t" << sizeof(long) << "\n";
    cout << "long long \t" << sizeof(long long) << "\n";
    cout << "float \t\t" << sizeof(float) << "\n";
    cout << "double \t\t" << sizeof(double) << "\n";
    cout << "long double \t" << sizeof(long double) << "\n";
    cout << "char \t\t" << sizeof(char) << "\n";
    cout << "bool \t\t" << sizeof(bool) << "\n" << endl;
// task3
    int id;
    int age;
    float height;
    cout << "=== Task 3: Enter Person Data ===\n";
    cout << "Enter your ID: ";
    cin >> id;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your height in meters: ";
    cin >> height;

    cout << "\n";
    cout << "--- Summary ---\n";
    cout << "ID: " << id << "\n";
    cout << "Age: " << age << "\n";
    cout << "Height: " << height << " m" << endl;
}
