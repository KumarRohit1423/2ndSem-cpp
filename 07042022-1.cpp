#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,m1,n,n1,i,j;
    cout<<"Enter dimensions of the two arrays to be multiplied : \n";
    cin>>m>>n>>m1>>n1;
    if(n!=m1)
    cout<<"Multiplication not possible. Go study basic Mathematics first.\n";
    else
    {
        int arr1[m][n],arr2[m1][n1],arrm[m][n1];
        int k=0,temp,sum=0,ci;
        cout<<"Enter elements of first array: \n";
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>arr1[i][j];
            }
        }
        cout<<"Enter elements of second array: \n";
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
            {
                cin>>arr2[i][j];
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n1;j++)
            {
                k=n;
                sum=0;
                ci=0;
                while(ci<k)
                {
                    temp=arr1[i][ci]*arr2[ci][j];
                    sum+=temp;
                    ci++;
                }
                arrm[i][j]=sum; 
            }
        }
        cout<<"Resulting array: \n";
        for(i=0;i<m;i++)
        {
            for(j=0;j<n1;j++)
            {
                cout<<arrm[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}