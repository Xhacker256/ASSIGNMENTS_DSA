#include <iostream>
#include <string>

using namespace std;

// Function to calculate the average of marks for a subject
double calculateAverage(double coursework, double assignment, double midTerm, double endTerm) {
    return (coursework + assignment + midTerm + endTerm) / 4.0;
}

int main() {
    // Variables to store marks for each subject
    double physicsCoursework, physicsAssignment, physicsMidTerm, physicsEndTerm;
    double chemistryCoursework, chemistryAssignment, chemistryMidTerm, chemistryEndTerm;
    double mathsCoursework, mathsAssignment, mathsMidTerm, mathsEndTerm;

    // Input marks for Physics
    cout << "Enter marks for Physics:\n";
    cout << "Coursework: ";
    cin >> physicsCoursework;
    cout << "Assignment: ";
    cin >> physicsAssignment;
    cout << "Mid-Term: ";
    cin >> physicsMidTerm;
    cout << "End-of-Term: ";
    cin >> physicsEndTerm;

    // Input marks for Chemistry
    cout << "\nEnter marks for Chemistry:\n";
    cout << "Coursework: ";
    cin >> chemistryCoursework;
    cout << "Assignment: ";
    cin >> chemistryAssignment;
    cout << "Mid-Term: ";
    cin >> chemistryMidTerm;
    cout << "End-of-Term: ";
    cin >> chemistryEndTerm;

    // Input marks for Maths
    cout << "\nEnter marks for Maths:\n";
    cout << "Coursework: ";
    cin >> mathsCoursework;
    cout << "Assignment: ";
    cin >> mathsAssignment;
    cout << "Mid-Term: ";
    cin >> mathsMidTerm;
    cout << "End-of-Term: ";
    cin >> mathsEndTerm;

    // Calculate averages
    double physicsAverage = calculateAverage(physicsCoursework, physicsAssignment, physicsMidTerm, physicsEndTerm);
    double chemistryAverage = calculateAverage(chemistryCoursework, chemistryAssignment, chemistryMidTerm, chemistryEndTerm);
    double mathsAverage = calculateAverage(mathsCoursework, mathsAssignment, mathsMidTerm, mathsEndTerm);

    // Calculate overall average
    double overallAverage = (physicsAverage + chemistryAverage + mathsAverage) / 3.0;

    // Output results
    cout << "\nAverage Marks:\n";
    cout << "Physics Average: " << physicsAverage << endl;
    cout << "Chemistry Average: " << chemistryAverage << endl;
    cout << "Maths Average: " << mathsAverage << endl;
    cout << "Overall Average: " << overallAverage << endl;

    return 0;
}