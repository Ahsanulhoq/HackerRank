#include<iostream>
using namespace std;
int main()
{
    int n,d,e;
    cin>>n;
    cin>>d;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<1;j++)
        {
            e=arr[j];
        for(int k=j+1;k<n;k++)
        {
            arr[j]=arr[k];
            j++;
        }
        arr[n-1]=e;
        }

    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

