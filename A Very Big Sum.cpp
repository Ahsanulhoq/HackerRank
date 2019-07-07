#include<iostream>
using namespace std;

int main(){
int a;
long long int f=0;
cin>>a;
int s[a];
for(int i=0;i<a;i++)
{
    cin>>s[i];
    f+=s[i];

}
cout<<f;
return 0;
}

