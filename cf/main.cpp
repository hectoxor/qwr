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
    vector <int> dp(n+1);
    dp[0] = 0;
 
    for (int i = 0 ; i < n;i++){
        for (int j = 1;j <=a[i]; j++){
            if(dp[i+j] == 0){
                dp[i+j] = dp[i] + 1;
            }
            else{ 
                dp[i+j] = min(dp[i+j], dp[i] + 1);
            }
        }

    }
    cout<<dp[n-1]<<endl;




}

int main() {
    fastIO();
    
    int t = 1;
    //cin >> t;  // Comment this line if there is only one test case
    
    while (t--) {
        solve();
    }
    
    // Add pause to keep console window open
    cin.ignore();
    cin.get();
    
    return 0;
}

