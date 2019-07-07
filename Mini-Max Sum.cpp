#include<iostream>
using namespace std;
int main()
{
   long long int arr[5],s=0,n=0,k;
    int a;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];

    }
    for(int i=0;i<4;i++)
    {
        for(int j=4;j>i;j--)
        {
            if(arr[i]>=arr[j])
            {
                continue;
            }
            else
            {
                k=arr[j];
                arr[j]=arr[i];
                arr[i]=k;
            }
        }
    }
    for(int i=0;i<4;i++)
    {
        s+=arr[i];
    }
    if(arr[0]==arr[1]&&arr[1]==arr[2])
    {
        for(int i=0;i<4;i++)
    {
        n+=arr[i];
    }

    }
    else
    {
        for(int i=1;i<5;i++)
    {
        n+=arr[i];
    }

    }
cout<<n<<" "<<s;
}

