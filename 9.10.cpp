#include <iostream>
using namespace std;

char grade(int b);

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    char g = grade(marks);
    cout << "Your grade is: " << g << endl;
    return 0;
}

char grade(int b) {
    if (b > 80) {
        return 'A';
    } else if (b > 60) {
        return 'B';
    } else if (b > 40) {
        return 'C';
    } else {
        return 'F';
    }
}
