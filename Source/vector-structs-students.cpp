#include <iostream>
#include <string>
#include <vector>

using namespace std;

// define a struct to store information about a student
struct Student {
    string name;
    int age;
    double gpa;
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
    }

    return 0;
}
