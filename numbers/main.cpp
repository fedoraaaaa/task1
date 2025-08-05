#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;

    int max_256 = min({k2, k5, k6});

    int remaining_k2 = k2 - max_256;

    int max_32 = min(remaining_k2, k3);

    int total_sum = max_256 * 256 + max_32 * 32;

    cout << total_sum << endl;

    return 0;
}
