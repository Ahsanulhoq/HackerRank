#include<iostream>
using namespace std;
int main()
{
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    for(int i=x1,j=x2;i<=j;i+=v1,j+=v2)
    {
        if(i==j)
        {
           cout<<"YES";
           return 0;
        }


    }
    cout<<"NO";
}
