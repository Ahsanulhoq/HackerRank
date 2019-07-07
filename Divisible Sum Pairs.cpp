#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m, su = 0;
  cin >> n >> m;
  vector<int> a;
  for (int i = 0; i < n; i++) {
    int s;
    cin >> s;
    a.push_back(s);
  }
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if ((a[i] + a[j]) % m == 0) {
        su++;
      }
    }
  }
  cout << su;
}
