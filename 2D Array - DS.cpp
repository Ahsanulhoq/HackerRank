#include<iostream>
using namespace std;
int main()
{
    int arr[6][6],o[4][4][12][12],z[1];
    int q=0,w,e=-100;
    for (int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            for(int k=i;k<=i+3;k++)
            {
                for(int l=j;l<=j+3;l++)
                {
                    if(k==i+1&&(l==j||l==j+2))
                    {
                        o[i][j][k][l]=0;
                    }
                    else{
                        o[i][j][k][l]=arr[k][l];
                    }


                }
            }

        }
    }

 for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            w=0;
            for(int k=i;k<i+3;k++)
            {

                for(int l=j;l<j+3;l++)
                {
                   w+=o[i][j][k][l];

                }

            }
            if(w>q){
            q=w;

           }
           else{
                if(e<w)
                {
                    e=w;
                }

            }
}
    }
if(q>0){
    cout<<q;
}
else
    cout<<e;

}

