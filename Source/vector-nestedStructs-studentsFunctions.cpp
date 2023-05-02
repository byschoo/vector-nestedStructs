#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

// define a struct to store information about a student's address
struct Address {
    string street;
    string city;
    string state;
    string zip;
};

// define a struct to store information about a student
struct Student {
    string name;
    int age;
    double gpa;
    Address address;
};

// function to validate integer input
int getValidIntInput() {
    int input;
    while (!(cin >> input)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid integer: ";
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return input;
}

// function to validate double input
double getValidDoubleInput() {
    double input;
    while (!(cin >> input)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid decimal number: ";
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return input;
}

// function to validate string input
string getValidStringInput() {
    string input;
    while (true) {
        getline(cin, input);
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a valid string: ";
        } else {
            break;
        }
    }
    return input;
}

int main() {
    vector<Student> students; // use a vector instead of an array

    char addAnother = 'y';

    // prompt the user to input information about each student
    while (addAnother == 'y') {
        Student newStudent;

        cout << "Enter the name of the student: ";
        newStudent.name = getValidStringInput();

        cout << "Enter the age of the student: ";
        newStudent.age = getValidIntInput();

        cout << "Enter the GPA of the student: ";
        newStudent.gpa = getValidDoubleInput();

        // prompt the user to input information about the student's address
        cout << "Enter the street address of the student: ";
        newStudent.address.street = getValidStringInput();

        cout << "Enter the city of the student: ";
        newStudent.address.city = getValidStringInput();

        cout << "Enter the state of the student: ";
        newStudent.address.state = getValidStringInput();

        cout << "Enter the ZIP code of the student: ";
        newStudent.address.zip = getValidStringInput();

        students.push_back(newStudent);

        cout << "Do you want to add another student? (y/n) ";
        cin >> addAnother;
        cin.ignore(); // ignore the newline character left in the buffer by cin
    }

    // print out the information about each student
    cout << endl;
    for (int i = 0; i < students.size(); i++) {
        cout << "Student " << i+1 << ":" << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "GPA: " << students[i].gpa << endl;
        cout << "Address:" << endl;
        cout << "Street: " << students[i].address.street << endl;
        cout << "City: " << students[i].address.city << endl;
        cout << "State: " << students[i].address.state << endl;
        cout << "ZIP Code: " << students[i].address.zip << endl;
        cout << endl;
}

return 0;
}
