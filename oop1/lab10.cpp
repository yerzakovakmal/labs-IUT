//Akmal Yerzakov U2510064

#include <iostream>
using namespace std;


void displayRecords(int *p, int patients){
    cout << "\n--- Patient Records ---" << endl;
    for(int i = 0; i < patients; i++){
        cout << "Patient " << i + 1 << ":" << "heart rate = " << *(p + i) << "\t address = " << (p + i) << endl;
    }
}

void analyze(int *p, int patients, int *min, int *max, double *avg){
    *min = *(p + 0);
    *max = *(p + 0);
    double total = 0;
    for (int i = 0; i < patients; i++){
        int value = *(p + i);
        if (value < *min)
            *min = value;
        if (value > *max)
            *max = value;
        total += value;
    }
    *avg = total / patients;

    cout << "\n--- Data Analysis ---" << endl;
    cout << "Highest heart rate = " << *max << endl;
    cout << "Lowest heart rate = " << *min << endl;
    cout << "Average heart rate = " << *avg << endl;
}

void find(int *p, int patients, int t){
bool found = false;
    for (int i = 0; i < patients; i++){
        if (*(p + i) == t){
            cout << "Heart rate " << *(p + i) << " found for patient #" << i + 1 << endl;
            found = true;
        }
    }
if (!found) {
    cout << "No patient with heart rate " << t << " found." << endl;
}
}

int main(){
    int choice, patients = 0, *min, *max, n, t;
    double *avg;
    int patientData[30];
    int *p = patientData;

    do
    {
        cout << "==== HOSPITAL PATIENT MONITORING SYSTEM ====" << endl;
        cout << "1. Enter patient data" << endl;
        cout << "2. Display all records" << endl;
        cout << "3. Analyze data" << endl;
        cout << "4. Sort patient" << endl;
        cout << "5. Search patient" << endl;
        cout << "6. Exit" << endl;
        cout << "\n--> Choose option: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "How many patients? (max 30): ";
            cin >> patients;

            if (patients < 1 || patients > 30){
                cout << "Invalid number of patients! "<< endl;
                return 0;
            }

            cout << "Enter heart rate for each patient: " << endl;
            for (int i = 0; i < patients; i++){
                cout << "Patient " << i + 1 << ": ";
                cin >> *(p + i);
            }
            cout << "Patient data entered successfully." << endl;
            break;
        case 2:
            displayRecords(p, patients);
            break;
        case 3:
            int min, max;
            double avg;
            analyze(p, patients, &min, &max, &avg);
            break;
        case 4:
            for (int i = 0; i < patients - 1; i++){
                for (int j = i + 1; j < patients; j++){
                    if (*(p + j) < *(p + i)){
                        int temp = *(p + i);
                        *(p + i) = *(p + j);
                        *(p + j) = temp;
                    }
                }
            } 
            cout << "Patient sorted successfully." << endl;
            break;
        case 5:
            cout << "Enter heart rate to search: ";
            cin >> t;
            find(p, patients, t);
            break;
        case 6:
            cout << "Thank you! Program ended" << endl;
            break;
        default:
            cout << "Invalid choice! Choose between [1-6]" << endl;
            break;
        }
    } while (choice != 6);
    
}