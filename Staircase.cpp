#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    int j,l;
for(int i=0;i<n;i++)
{
    l=0;
    for(j=n-1;j>i;j--)
    {
        cout<<" ";
        l++;
    }
    for(int k=0;k<n-l;k++)
    {
        cout<<"#";
    }
    cout<<endl;
}

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}

