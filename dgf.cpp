#include<bits/stdc++.h>
using namespace std ;

int main()
{   int n ;
     cin>>n;
     if((n%5==0))
        {
            if(n%11==0)
		   cout<<"both";
            else 
             cout<<"one";          
        }
	 else if((n%11==0))
           {
               if(n%5==0)
                cout<<"both";
               else
                cout<<"one";
           }
		else
		   cout<<"none";
	

}