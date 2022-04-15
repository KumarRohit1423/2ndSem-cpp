#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sums=0,n,a=0,b=1,i;
    cout<<"Enter the value\n";
    cin>>n;
    if(n<1)
    cout<<"Not possible\n";
    else if(n==1)
    cout<<a<<"\n";
    else
    {
        cout<<a<<" "<<b<<" ";
        do
        {
            sums=a+b;
            cout<<sums<<" ";
            a=b;
            b=sums;
        }
        while((a+b)<n);
    }
    return 0;
    
}