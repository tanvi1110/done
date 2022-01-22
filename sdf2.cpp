#include<bits/stdc++.h>
using namespace std ;

int main()
{
  long long int t;
  cin>>t;  
  while(t--)
  {
    long long int n , k ;
    cin>>n>>k;
    int arr[n] , zrr[n];
       for(int i=1 ; i<=n ; i++)
       {
           arr[i] = 1;
       }
           for(int i=0 ; i<k ;i++)
           {
               int first = 1;
               int second = 2;
               int arrpointer = 1;
               while(arrpointer <= n)
               {
                   if(arrpointer <= n/2)
                   {
                       zrr[arrpointer] = arr[first];
                       first+=2;
                   }




               }


           }



  }




}