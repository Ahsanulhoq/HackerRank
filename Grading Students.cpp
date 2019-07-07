#include<iostream>
using namespace std;
int main()
{
    int n,p,q;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        p=arr[i];
        q=arr[i];
        while(!((p-1)%5==0))
        {

            if(arr[i]<38)
            {
                break;
            }

            else if((p-q>=3))
            {
                arr[i]=q;
                break;

            }
            else
            {
                arr[i]=p;
            }
            p++;


        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}

