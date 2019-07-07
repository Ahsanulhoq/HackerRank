#include <iostream>
#include <cstdio>
#include<vector>
#include<algorithm>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    vector<int> s;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    s.push_back(a);
    s.push_back(b);
    s.push_back(c);
    s.push_back(d);
    sort(s.begin(),s.end());
    cout <<s.back();
         return 0;
}


