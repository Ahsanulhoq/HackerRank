#include <cmath>
#include <cstdio>
#include <vector>
#include<queue>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    queue<int> a;
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int w,e;
        cin>>w;

        if(w==1)
        {
            cin>>e;
            a.push(e);
        }
        else if (w==2)
        {
            a.pop();
        }
        else
        {
            cout<<a.front()<<endl;
        }
    }



}

