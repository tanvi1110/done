#include <bits/stdc++.h>
#include<string>
using namespace std;

int main()
{  
    int t , c=0 ; string s = " ";
    cout<<"Enter the test cases";
    cin>>t; 
  while (t--)
  {
      cout<<" Enter the string of binary number ";
      cin>>s;
      int n = s.length(); 

      for(int i = 0 ; i < n ; i++)
      {
          if((s.substr(i , i+2)=="10") || (s.substr(i , i+2)== "11"))
            {
                c=c+1;
            }
          cout<<c<<endl;
      }
      if (c >= 1)
      cout<<"yes"<<endl;
      else
      cout<<"no"<<endl;
  c=0;
  }
}
  