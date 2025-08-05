#include <iostream>
using namespace std;

int main() {

    cout << "Enter the number of test cases: ";
    int t;
    cin >> t;

    while (t--) {
        cout << "Enter a number (n) between 2 and 1,000,000: ";
        int n;
        cin >> n;

        cout << "Maximum GCD is: " << n / 2 << endl;
    }

    return 0;
}
