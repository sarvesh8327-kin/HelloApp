#include <iostream>
using namespace std;

int main() {
    int n, marks[100], total = 0;

    cout << "Enter number of students: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Enter mark " << i+1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    double avg = (double)total / n;

    cout << "Total: " << total << endl;
    cout << "Average: " << avg << endl;

    if(avg >= 80)
        cout << "Grade A";
    else if(avg >= 60)
        cout << "Grade B";
    else if(avg >= 40)
        cout << "Grade C";
    else
        cout << "Fail";

    return 0;
}