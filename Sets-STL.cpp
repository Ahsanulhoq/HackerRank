#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    set<int> a;
    for(int i=0;i<t;i++)
    {
        int s;
        cin>>s;
        if(s==1)
        {
            int d;
            cin>>d;
            a.insert(d);
        }
        else if(s==2)
        {
            int d;
            cin>>d;
            a.erase(d);
        }
        else
        {
            int d;
            cin>>d;
            if(a.find(d)!=a.end())
            {
                cout<<"Yes"<<endl;
            }
            else
                cout<<"No"<<endl;
        }
    }
     return 0;
}




