//Akmal Yerzakov 
// U2510064

#include <iostream>
#include <cmath>
using namespace std;

void area(double x, double y){
    double rec_area = x * y;
    cout << "\nRectangle area: " << rec_area << endl;
}

void area(float x, float y, float z){
    float s = (x+y+z) / 2;
    double tri_area = sqrt(s * (s - x) * (s - y) * (s - z));
    cout << "Triangle area: " << tri_area << endl;
}

void area(double x){
    double square_area = x * x;
    cout << "Square area: " << square_area << endl;
}

int qualityPoints(double avg){
    if (avg <= 100 && avg >= 90)
        return 4;
    else if (avg < 90 && avg >= 80)
        return 3;
    else if (avg < 80 && avg >= 70)
        return 2;
    else if (avg < 70 && avg >= 60)
        return 1;
    else
        return 0;
}

template<typename A>
A largest(A sth1, A sth2){
    if (sth1 > sth2)
        return sth1;
    else
        return sth2;
}


template<typename A>
A smallest(A sth1, A sth2){
    if (sth1 < sth2)
        return sth1;
    else
        return sth2;
}

int main(){
    // task 1
    cout << " === Task 1 ===" << endl;
    double x, y, z;
    cout << "Enter a value for x: ";
    cin >> x;
    cout << "Enter a value for y: ";
    cin >> y;
    cout << "Enter a value for z: ";
    cin >> z;
    area(x, y);
    area(x, y, z);
    area(x);

    //task 2
    cout << "\n === Task 2 ===" << endl;
    int avg;
    cout << "Enter student's average: ";
    cin >> avg;
    cout << qualityPoints(avg) << endl;

    //task 3
    cout << "\n=== Task 3 ===" << endl;
    int int1, int2;
    float f1, f2;
    char ch1, ch2;
    cout << "Enter two integers: ";
    cin >> int1 >> int2;
    cout << "Largest: " << largest(int1, int2) << endl;
    cout << "Smallest: " << smallest(int1, int2) << endl;

    cout << "\nEnter two floating numbers: ";
    cin >> f1 >> f2;
    cout << "Largest: " << largest(f1, f2) << endl;
    cout << "Smallest: " << smallest(f1, f2) << endl;

    cout << "\nEnter two characters: ";
    cin >> ch1 >> ch2;
    cout << "Largest: " << largest(ch1, ch2) << endl;
    cout << "Smallest: " << smallest(ch1, ch2) << endl;
}











