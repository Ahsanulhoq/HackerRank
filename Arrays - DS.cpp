#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a>1000||a<1)
    {
        return 0;
    }
    int s[a];
    for(int i=0;i<a;i++)
    {
        cin>>s[i];
        if(s[i]>10000||s[i]<1)
    {
        return 0;
    }
    }
    for(int i=a-1;i>=0;i--)
    {
        cout<<s[i]<<" ";
    }
}


