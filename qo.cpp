#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
        
    }
    
    int ans=0,cost;
    int m=arr[0] , m1=arr[0];
    for(int i=0 ; i<n ; i++)
    
    { if(arr[i]>m)
      m=arr[i];
    } 
    
      for(int i=0 ; i<n ; i++)
    
    { if(arr[i]<m1)
      m1=arr[i];
    } 
    int x=m1 - (n - 1)*k;

for(  ; x<m ; x++ )   
  {
    cost = 0;
    for (int i=1 ; i<n ; i++){
        cost += abs(x + (i - 1)*k - arr[i]);
    }
    if (cost < ans)
        ans = cost;
  }
  cout<<cost;
    
    return 0;
}