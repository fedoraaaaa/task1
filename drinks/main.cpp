#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of drinks: ";
    cin >> n;

    double sum = 0.0;
    cout << "Enter the percentage of orange juice in each drink (separated by spaces): ";
    for (int i = 0; i < n; ++i) {
        int pi;
        cin >> pi;
        sum += pi;
    }

    double average = sum / n;
    cout << fixed << setprecision(12);
    cout << "The percentage of orange juice in the cocktail is: " << average << "%" << endl;

    return 0;
}
