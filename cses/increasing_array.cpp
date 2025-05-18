#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
        long long int n;
        cin>>n;
        vector<long long int> input;
        for(long long int i=0;i<n;i++)
        {
            long long int temp;
            cin>>temp;
            input.push_back(temp);
        }
        long long int moves=0;
        for(long long int i=1;i<n;i++)
        {
            if(input[i]<input[i-1])
            {
                
                  moves+=input[i-1]-input[i];
                  input[i]=input[i-1];
            }

        }
        cout<<moves<<endl;
}