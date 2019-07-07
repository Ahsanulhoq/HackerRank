#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,j=0,k=0;
    cin>>a;
   int arr[a];
    for(int i=0;i<a;i++)
    {
        int s,d;
        cin>>s;
        if(s==1)
        {
            cin>>d;
            arr[j]=d;
            j++;

        }
        else if(s==2)
        {
            j--;

        }
        else
        {
            k=0;
            for(int i=0;i<j;i++)
    {
        if(arr[i]>k)
        {
            k=arr[i];
        }
    }
    cout<<k<<endl;

        }


    }

    return 0;
}

