#include<bits/stdc++.h>
using namespace std;
int worker(int nim,int act)
{
    int lim=0;
    for(int i=0;i<nim;i++)
    {
        lim=lim+act;
        act--;
    }
    return lim;
}
int main()
{
    int i,j,k=1,num;
    cout<<"Enter number: ";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1)
            cout<<k<<" ";
            else
            {
                if(j%2==0)
                {
                    cout<<(worker(j,num)-(i-j))<<" ";
                }
                else
                {
                    cout<<(worker(j,num)-(num-j)+(i-j))<<" ";
                } 
            }
        }
        k++;
        cout<<"\n";
    }

}