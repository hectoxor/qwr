#include <bits/stdc++.h>
using namespace std;

// Useful typedefs
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

// Fast I/O
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

// Commonly used macros
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int i = (b) - 1; i >= (a); i--)
#define R0F(i, a) ROF(i, 0, a)
#define each(a, x) for (auto& a : x)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define pb push_back
#define mp make_pair
#define F first
#define S second

// Debug print helpers
#define debug(x) cerr << #x << ": " << x << endl

// Solution to the problem
void solve() {
    // Read input
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // TODO: Implement solution here
    
    // Output result
    int result = 0;
    cout << result << "\n";
}

int main() {
    fastIO();
    
    // For file input/output during local testing
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int t = 1;
    cin >> t;  // Comment this line if there is only one test case
    
    for (int tc = 1; tc <= t; tc++) {
        // For Google Code Jam style output format
        // cout << "Case #" << tc << ": ";
        solve();
    }
    
    return 0;
}
