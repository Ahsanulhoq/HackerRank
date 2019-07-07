#include<iostream>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    if(a[8]=='A'&&a[0]=='1'&&a[1]=='2')
    {
        a[0]='0';
        a[1]='0';

    }
    else if(a[8]=='A'){}
    else if(a[8]=='P'&&a[0]=='1'&&a[1]=='2')
    {

    }
    else{
        a[0]=a[0]+1;
    a[1]=a[1]+2;
    }


    for(int i=0;i<8;i++)
    {
        cout<<a[i];
    }
}

