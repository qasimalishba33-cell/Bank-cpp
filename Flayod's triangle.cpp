#include <iostream>
using namespace std;

int main() {
    int n;  // number of rows
    cout << "Enter number of rows: ";
    cin >> n;

    int num = 1; // starting number

    for (int i = 1; i <= n; i++) {          // outer loop → rows
        for (int j = 1; j <= i; j++) {      // inner loop → numbers in each row
            cout << num << " ";             // print current number
            num++;                          // increase the number for next print
        }
        cout << endl;                       // move to next row
    }

    return 0;
}
