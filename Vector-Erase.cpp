#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,q,w,e;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int s;
        cin>>s;
        a.push_back(s);
    }
    cin>>q;
    a.erase(a.begin()+(q-1));
    cin>>w>>e;
    a.erase(a.begin()+(w-1),a.begin()+(e-1));
    cout<<a.size()<<endl;
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
}
