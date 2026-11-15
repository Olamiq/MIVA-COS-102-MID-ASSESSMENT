#include <iostream>

using namespace std;

int main() {
    double angle1{}, angle2{};
    cout << "--- Right-Angled Triangle Checker ---\n";
    
    cout << "Enter the first angle: ";
    if (!(cin >> angle1)) {
        cout << "Invalid input. Please enter a number.\n";
        return 1;
    }
    
    cout << "Enter the second angle: ";
    if (!(cin >> angle2)) {
        cout << "Invalid input. Please enter a number.\n";
        return 1;
    }
    
    // Validate the angles
    if (angle1 <= 0 || angle2 <= 0 || (angle1 + angle2) >= 180) {
        cout << "Invalid triangle angles! Angles must be positive and their sum must be less than 180°.\n";
        return 1;
    }
    
    // Calculate the third angle
    double angle3 = 180.0 - (angle1 + angle2);
    cout << "The third angle is: " << angle3 << "°\n";
    
    // Check if any angle is 90 degrees
    if (angle1 == 90.0 || angle2 == 90.0 || angle3 == 90.0) {
        cout << "Result: This IS a right-angled triangle.\n";
    } else {
        cout << "Result: This is NOT a right-angled triangle.\n";
    }
    
    return 0;
}