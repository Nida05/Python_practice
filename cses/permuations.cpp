// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
  int n;
  cin>>n;

  if(n<=3 && n!=1)
  {
      cout<<"NO SOLUTION";
  }
  
  else
  {
      vector<int> odds;
      vector<int> ans;
      for(int i=1;i<=n;i++)
      {
          if(i%2==0)
          {
              ans.push_back(i);
          }
          else
          {
              odds.push_back(i);
          }
      }
      ans.insert(ans.end(),odds.begin(),odds.end());
      for(int i=0;i<n;i++)
      {
          cout<<ans[i]<<" ";
      }
       
  }

    return 0;
}