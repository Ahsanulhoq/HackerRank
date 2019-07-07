#include<iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main()
{

    int n,q;
    cin>>n;
    getchar();
    string a[n];
    if(n>1000||n<1)
    {
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        getline(cin,a[i]);

    }
    cin>>q;
    getchar();
    string s[q];
    int arr[q];
    if(q>1000||q<1)
    {
        return 0;
    }
    for(int i=0;i<q;i++)
    {
        getline(cin,s[i]);
    }


    int w;
    for(int i=0;i<q;i++)
    {
         w=0;
        for(int j=0;j<n;j++)
        {
            if(s[i]==a[j])
            {
                w++;

            }

        }
        arr[i]=w;
    }

    for(int i=0;i<q;i++)
    {
        cout<<arr[i]<<endl;
    }

return 0;
}

