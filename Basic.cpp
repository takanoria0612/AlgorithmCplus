#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Receive input
    int N, v;
    cin >> N >> v;
    vector<int> a(N);
    for (int i = 0; i < N; ++i)
        cin >> a[i];

    // Linear search
    bool exist = false; // Initialize the flag as false
    for (int i = 0; i < N; ++i) {
        if (a[i] == v) {
            exist = true; // Set the flag if found
        }
    }

    // Output the result
    if (exist)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
