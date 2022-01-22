#include<bits/stdc++.h>
using namespace std ; 

int main()
{ 
    int t ; 
    cout<<"Enter test cases \n";
    cin >> t;
    while (t--)
   { 
       int n , d , j=0  ; 
        cout<<"Enter n and d \n";
        cin >>n>>d; 
        int a[n] , b[n]; 
       for ( int i = 1 ; i<=n ; i++)
       { 
           a[i]= i ; 
           cout<<a[i];
       }cout<<"\n";
    while(d > 0)
    {
         for(int i = 0 ; i<n ; i++)
         {
            if ( i%2 ==0)
                {b[j]= a[i];
                cout<<b[j]<<endl;}
            else
               b[j]= a[i]; 
               j++;
             
         } d--;
         j=0;
    } 
    for (int i =1 ; i<= n ; i++)
       cout << b [i]<<endl;
 }
}