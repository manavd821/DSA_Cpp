#include <iostream>
using namespace std;

int main() {
    int totalClasses, attendedClasses, requiredPercentage, missedClasses, targetClasses;
    float attendancePercentage;
    const float MIN_ATTENDANCE = 75.0; // Minimum required percentage

    // Input total classes and attended classes
    cout << "Enter total number of classes held: ";
    cin >> totalClasses;
    
    if (totalClasses <= 0) {
        cout << "Total classes must be greater than zero." << endl;
        return 1;
    }
    
    cout << "Enter number of classes attended: ";
    cin >> attendedClasses;
    
    if (attendedClasses < 0 || attendedClasses > totalClasses) {
        cout << "Invalid input! Attended classes should be between 0 and " << totalClasses << "." << endl;
        return 1;
    }
    
    // Calculate attendance percentage
    attendancePercentage = (static_cast<float>(attendedClasses) / totalClasses) * 100;
    
    // Display result
    cout << "Your attendance percentage is: " << attendancePercentage << "%" << endl;
    
    // Check if attendance meets the requirement
    if (attendancePercentage >= MIN_ATTENDANCE) {
        cout << "You meet the attendance requirement." << endl;
    } else {
        cout << "You do not meet the attendance requirement." << endl;
    }
    
    // Calculate required classes to reach a particular percentage
    cout << "Enter the required attendance percentage: ";
    cin >> requiredPercentage;
    
    if (requiredPercentage < 0 || requiredPercentage > 100) {
        cout << "Invalid input! Percentage should be between 0 and 100." << endl;
        return 1;
    }
    
    int additionalClasses = 0;
    while (((static_cast<float>(attendedClasses + additionalClasses) / (totalClasses + additionalClasses)) * 100) < requiredPercentage) {
        additionalClasses++;
    }
    
    cout << "You need to attend " << additionalClasses << " more classes to reach " << requiredPercentage << "% attendance." << endl;
    
    // Calculate the effect of missing classes
    cout << "Enter the number of classes you plan to miss: ";
    cin >> missedClasses;
    
    if (missedClasses < 0 || missedClasses > totalClasses - attendedClasses) {
        cout << "Invalid input! Missed classes should be between 0 and remaining classes." << endl;
        return 1;
    }
    
    float newAttendance = (static_cast<float>(attendedClasses) / (totalClasses + missedClasses)) * 100;
    cout << "If you miss " << missedClasses << " classes, your attendance will drop to " << newAttendance << "%" << endl;
    
    // Calculate how many classes can be missed to reach a target attendance percentage
    cout << "Enter the target attendance percentage: ";
    cin >> targetClasses;
    
    if (targetClasses < 0 || targetClasses > 100) {
        cout << "Invalid input! Target percentage should be between 0 and 100." << endl;
        return 1;
    }
    
    int maxMissableClasses = 0;
    while (((static_cast<float>(attendedClasses) / (totalClasses + maxMissableClasses)) * 100) > targetClasses) {
        maxMissableClasses++;
    }
    maxMissableClasses--;
    
    cout << "You can miss up to " << maxMissableClasses << " classes to maintain at least " << targetClasses << "% attendance." << endl;
    
    return 0;
}
