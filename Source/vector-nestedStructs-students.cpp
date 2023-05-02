#include <iostream>
#include <string>
#include <vector>

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

int main() {
    vector<Student> students; // use a vector instead of an array

    char addAnother = 'y';

    // prompt the user to input information about each student
    while (addAnother == 'y') {
        Student newStudent;

        cout << "Enter the name of the student: ";
        getline(cin, newStudent.name);

        cout << "Enter the age of the student: ";
        cin >> newStudent.age;

        cout << "Enter the GPA of the student: ";
        cin >> newStudent.gpa;
        cin.ignore(); // ignore the newline character left in the buffer by cin

        // prompt the user to input information about the student's address
        cout << "Enter the street address of the student: ";
        getline(cin, newStudent.address.street);

        cout << "Enter the city of the student: ";
        getline(cin, newStudent.address.city);

        cout << "Enter the state of the student: ";
        getline(cin, newStudent.address.state);

        cout << "Enter the ZIP code of the student: ";
        getline(cin, newStudent.address.zip);

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
        cout << endl;
        cout << "Address:" << endl;
        cout << "Street: " << students[i].address.street << endl;
        cout << "City: " << students[i].address.city << endl;
        cout << "State: " << students[i].address.state << endl;
        cout << "ZIP: " << students[i].address.zip << endl;
        cout << endl;
    }

    return 0;
}
