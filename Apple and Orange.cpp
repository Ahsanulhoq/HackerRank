#include<iostream>
using namespace std;
int main()
{
    int s,t,a,b,n,m,app=0,org=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        int g;
        cin>>g;
        if(a+g>=s&&a+g<=t)
        {
            app++;
        }
    }
    for(int i=0;i<n;i++)
    {
        int g;
        cin>>g;
        if(b+g<=t&&b+g>=s)
        {
            org++;
        }
    }
    cout<<app<<endl<<org;

}

