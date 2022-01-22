#include<bits/stdc++.h>
using namespace std ; 

int main()
{ 
    long long int t ; 
    cout<<"Enter test cases \n";
    cin >> t;
    while (t--)
   { 
       int n , d , j=1  ; 
        cout<<"Enter n and d \n";
        cin >>n>>d; 
        int a[n] , b[n]; 
       for ( int i = 1 ; i<=n ; i++)
       { 
           a[i]= i ; 
       }
        b[0]=a[0];
      while(d > 0)
     {
         for(int i = 1 ; i<=n ; i++)
         {
            if ( i%2 == 0 )
                b[j] = a[i];
                
            else
                b[j] = a[i]; 
                 j++;
             
         } d--;
         j=1;
    } 
    for (int i =1 ; i<= n ; i++)
       cout << b [i]<<endl;
 }
}