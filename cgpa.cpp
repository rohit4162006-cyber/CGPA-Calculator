#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of courses: ";
    cin >> n;

    float grade, credit;
    float totalCredits = 0;
    float totalGradePoints = 0;

    for(int i = 1; i <= n; i++) {
        cout << "\nCourse " << i << endl;

        cout << "Enter grade: ";
        cin >> grade;

        cout << "Enter credit hours: ";
        cin >> credit;

        totalCredits += credit;
        totalGradePoints += grade * credit;
    }

    float GPA = totalGradePoints / totalCredits;

    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout << "GPA / CGPA: " << GPA << endl;

    return 0;
}
