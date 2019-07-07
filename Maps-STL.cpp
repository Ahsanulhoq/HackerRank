#include <map>
#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> l;
    map<string,int> a;
    for(int i=0;i<n;i++)
    {
        int s;
        cin>>s;
        if(s==1)
        {
            int z;
            string x;
            cin>>x;
            cin>>z;
            a[x]+=z;
        }
        else if(s==2)
        {
            string z;
            cin>>z;
            a.erase(z);
        }
        else
        {
            string z;
            cin>>z;
            l.push_back(a[z]);
        }
    }
    for(int i=0;i<l.size();i++)
    {
        cout<<l[i]<<endl;
    }
    return 0;
}
