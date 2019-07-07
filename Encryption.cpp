#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    string b;
    for(long i=0;i<a.length();i++)
    {
        if(a[i]!=' ')
        {
            b+=a[i];

        }

    }
  long q,w,e=0;
  q=sqrt(b.length());
  w=(sqrt(b.length())+1);
  if(q*w<b.length())
  {
      q++;
  }
  else if(q*q==b.length())
  {
      w=q;
  }
  char arr[q][w];
  for(long i=0;i<q;i++)
  {
      for(long j=0;j<w;j++)
      {
          arr[i][j]=b[e];
          e++;
      }
  }
  for(long i=0;i<w;i++)
  {
      for(long j=0;j<q;j++)
      {
          if(arr[j][i]=='\0')
          {
              continue;
          }

      }

  }


  for(long i=0;i<w;i++)
  {
      for(long j=0;j<q;j++)
      {
          if(arr[j][i]=='\0')
          {
              continue;
          }
          cout<<arr[j][i];

      }
      cout<<' ';
  }
return 0;



}


