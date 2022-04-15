#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,num,j,flag=0;
    cout<<"Enter limit: ";
    cin>>num;
    if(num<2)
    cout<<"Wrong input\n";
    else if(num==2)
    cout<<num<<"\n";
    else
    {
        cout<<2<<" ";
        for(i=3;i<num;i++)
        {
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            cout<<i<<" ";
            flag=0;
        }
    }
    return 0;
}