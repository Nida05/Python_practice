#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long n;
     cin>>n;
     long long  act_sum=(n*(n+1))/2;
     long long  arr_sum=0;
     for(int i=0;i<n-1;i++)
     {
        long long int temp;
        cin>>temp;
        arr_sum+=temp;
     }
    cout<<act_sum-arr_sum<<endl;
}