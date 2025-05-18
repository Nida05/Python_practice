// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main() 
{

    string str;
    cin>>str;
    int len;
    int max_len=0;
    for(int i=0;i<str.length();i++)
    {
        len=1;
       
        while(str[i]==str[i+1] && i<str.length())
        {
            len++;
            i++;
        }
        max_len=max(max_len,len);
    }
    cout<<max_len<<endl;
    


}