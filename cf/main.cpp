#include <bits/stdc++.h>
using namespace std;

// For faster input/output
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

// Solution goes here
void solve() {
    // Read input
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // TODO: Write your solution here
    
    // Example output
    int result = 0;
    for(int x : a) result += x;
    cout << result << "\n";
}

int main() {
    fastIO();
    
    int t = 1;
    cin >> t;  // Comment this line if there is only one test case
    
    while (t--) {
        solve();
    }
    
    // Add pause to keep console window open
    cout << "\nPress Enter to continue...";
    cin.ignore();
    cin.get();
    
    return 0;
}
