#include <iostream>
#include <vector>

using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int appleCount = 0;
    int orangeCount = 0;

    // Calculate positions of apples and count those in [s, t]
    for (int d : apples) {
        int pos = a + d;
        if (pos >= s && pos <= t) {
            appleCount++;
        }
    }

    // Calculate positions of oranges and count those in [s, t]
    for (int d : oranges) {
        int pos = b + d;
        if (pos >= s && pos <= t) {
            orangeCount++;
        }
    }

    cout << appleCount << endl;
    cout << orangeCount << endl;
}

int main() {
    int s, t;
    cin >> s >> t;

    int a, b;
    cin >> a >> b;

    int m, n;
    cin >> m >> n;

    vector<int> apples(m);
    for (int i = 0; i < m; i++) {
        cin >> apples[i];
    }

    vector<int> oranges(n);
    for (int i = 0; i < n; i++) {
        cin >> oranges[i];
    }

    countApplesAndOranges(s, t, a, b, apples, oranges);

    return 0;
}
