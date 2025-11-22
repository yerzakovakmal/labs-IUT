// Yerzakov Akmal U2510064

#include <iostream>
using namespace std;
void addS(int students[], int sID, int &size){
    students[size] = sID;
    size++;
    cout << "Student added." << endl;
}

void insert(int students[], int sID, int indx, int &size){
    if (size < indx){
        cout << "Cannot be inserted! Size of list is less than given index" << endl;
        return;
    }

    for (int i = size - 1; i >= indx; i--){
        students[i+1] = students[i];
    }
    students[indx] = sID;
    size++;
    cout << "Student inserted at index "<< indx <<"." << endl;
}

void del(int students[], int indx, int &size){
    if (size == 0){
        cout << "\n!!! No students in the list !!!" << endl;
        return;
    }
    for (int i = indx; i < size - 1; i++){
        students[i] = students[i + 1];
    }
    size--;
    cout << "Student deleted." << endl;
}

void search(int students[], int size, int sID){
    bool found = false;
    int curelem = 0;
    if (size == 0){
        cout << "\n!!! No students in the list !!!" << endl;
        return;
    }
    while (curelem < size && !found)
    {
        if(students[curelem] == sID)
            found = true;
        else
            curelem++;
    }
    if (found == true)
        cout << "Student with ID " << sID << " found at index " << curelem << endl;
    else
        cout << "Student with ID " << sID << " not found." << endl;
}

void bsort(int students[], int n){
    for (int pass = 0; pass < n - 1; pass++){
        for(int i = 0; i < n - 1 - pass; i++){
            if(students[i] > students[i+1]){
                int temp = students[i];
                students[i] = students[i + 1];
                students[i + 1] = temp;
            }
        }
    }
}

void display(int students[], int &size){
    if (size == 0){
        cout << "\n !!! No students in the list !!!" << endl;
        return;
    }
    cout << "Student IDs: " << endl;
    for (int i = 0; i < size; i++){
        cout << "Index "<< i <<": " << students[i] << endl;
    }
    cout << endl;
}


int main(){
    int students[1000], size = 0;
    int choice, n, sID, indx;
    char again;
    do
    {
        cout << "\n==== Student ID Manager ====" << endl;
        cout << "1. Add student" << endl;
        cout << "2. Insert student" << endl;
        cout << "3. Delete student" << endl;
        cout << "4. Search student" << endl;
        cout << "5. Sort students by ID" << endl;
        cout << "6. Display all students" << endl;
        cout << "7. Exit" << endl;
        cout << "\n--> Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            do
            {
                cout << "Enter student ID: ";
                cin >> sID;

                addS(students, sID, size);

                cout << "Do you want to add another one? (y/n): ";
                cin >> again;
            } while (again == 'y' || again == 'Y');
            break;
        case 2:
        do
        {
            cout << "Enter position: ";
            cin >> indx;
            cout << "Enter student ID: ";
            cin >> sID;
            insert(students, sID, indx, size);

            cout << "Do you want to insert again? (y/n): ";
            cin >> again;
        } while (again == 'y' || again == 'Y');
        
            break;
        case 3:
        do{
            cout << "Enter index to delete: ";
            cin >> indx;
            del(students, indx, size);

            cout << "Do you want to delete again? (y/n): ";
            cin >> again;
        } while (again == 'y' || again == 'Y');

            break;
        case 4:
        do{
            cout << "Enter ID to search: ";
            cin >> sID;
            search(students, size, sID);

            cout << "Search another one? (y/n): ";
            cin >> again;
        } while (again == 'y' || again == 'Y');
            
            break;
        case 5:
            bsort(students, size);
            cout << "\nStudents sorted by ID in ascending order.";
            break;
        case 6:
            display(students, size);
            break;
        case 7:
            cout << "Thank you! Program ended." << endl;
            break;
        default:
            cout << "Invalid choice! Choose between [1-7]" << endl;
            break;
        }
    } while (choice != 7);
}