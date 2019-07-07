#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<vector<int>> a;
  vector<int> u;
  int n, q, p, l;
  cin >> n >> q;
  for (int i = 0; i < n; i++) {
    vector<int> r;
    cin >> p;
    for (int j = 0; j < p; j++) {
      cin >> l;
      r.push_back(l);
    }
    a.push_back(r);
  }
  for (int i = 0; i < q; i++) {
    int z, x;
    cin >> z >> x;
    u.push_back(a[z][x]);
  }
  for (int i = 0; i < q; i++) {
    cout << u[i] << endl;
  }
  return 0;
}

