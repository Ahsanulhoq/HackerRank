#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> a;
    int s,f;
    cin>>s;
    for(int i=0;i<s;i++)
    {
        cin>>f;
        a.push_back(f);
    }
    sort(a.begin(),a.end());
    for (int i= 0; i < s; i++) {
      cout<<a[i]<<" ";
    }
    return 0;
}

