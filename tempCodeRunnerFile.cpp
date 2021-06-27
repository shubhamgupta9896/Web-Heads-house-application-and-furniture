#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[4][4]={{0,1,1,1},{0,0,1,1},{1,0,1,1},{0,0,0,0}};
    int n = 4;
    int m = 4;
  int index = 0;
  int count = 0;
  int maxx = 0;
      for(int i = 0;i<n;i++){
        maxx= max(maxx,m-(lower_bound(arr[i],arr[i]+m,1)-arr[i]));
      }
    //   cout<<max<<endl;
      cout<<maxx;
    //   for(int i = 0;i<n;i++){
    //       reverse(arr[i],arr[i]+m);
    //   }

    //     for(int i = 0;i<n;i++){
      
    //      for(int j = 0;j<m;j++){
      
    //      cout<<arr[i][j]<<" ";
      
    //       }
    //       cout<<endl;
      
    //     }
    return 0;
}