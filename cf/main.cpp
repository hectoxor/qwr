// #include <bits/stdc++.h>
// using namespace std;

// // For faster input/output
// void fastIO() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
// }

// bool isPrime(int n){
//     bool ok = 1;
//     int sum = 0;
//     for (int i = 1;i<=n;i++){
//         if(n % i == 0){
//             sum++;
//         }
//     }
//     if(sum == 2){
//         return 1;
//     }
//     return 0;

// }
// // Solution goes here
// void solve(int qwe) {
//     // Read input
//     vector <int> a;
//     map <long long, bool> m;
//     map <long long, pair<int,int>> m1;
//     for (int i = 1; i<= 10000; i++){
//         if(isPrime(i)){
//             a.push_back(i);
//         }


//     }

//     for(int i: a){
//         for (int j: a){
//             if(i!= j && !m){
//               m[i*j] = 1;
//               m1[i*j].first = i;
//               m1[i*j].second = j;
//             }
//         }
//     }

//     for(int i = qwe;i<=10000;i++){
//         if(m[i] == 1){
//             cout << m1[i].first<<' '<< m1[i].second<<' '<<i<<endl;
//             return;
//         }
//     }



    
   
    




// }

// int main() {
//     fastIO();
    
//     int t = 1;
//     //cin >> t;  // Comment this line if there is only one test case
    
//     while (t--) {
//         int q;
//         cin >> q;
//         solve(q);
//     }
    
//     // Add pause to keep console window open
//     cin.ignore();
//     cin.get();
    
//     return 0;
// }

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include "turtle.h"
#include <iostream>
#include <iomanip>
#include "turtle.h"


using namespace std;




int main() {

  double x, y, distance, direction;

  returnToHome(x, y);

  cout << fixed << setprecision(1);

  while(readInput(distance, direction)) {
    move(x, y, distance, direction);
    cout << distance << "@" << direction << " -> " << x << ", " << y << endl; 
  }

  findHome(x, y, distance, direction);
  cout << distance << "@" << direction << " -> Home" << endl; 

  return 0;

}
// Convert radian to degree
double r2d(double radian) {
  return radian * 180 / M_PI;
}

// Convert degree to radian
double d2r(double degree) {
  return degree * M_PI / 180;
}