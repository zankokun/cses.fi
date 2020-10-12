#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int n;
  cin >> n;
  static array<int, 1000000> arr;
  if (n<3) {
      cout << "NO" << endl;
      return 0;
  }
  int64_t sum = (((1+n)*n)/2 );
  if(sum % 2 ==0){
      cout << "YES\n";
     int64_t  half= sum/2;
     int curr = n; 
     int count =0;
     int half_p=0;
      while(half!=0 ){
          count++;
          if(half>n){
              arr[curr-1]=1;
              half-=curr;
              curr--;
          }
          else {
              half_p = half;
              arr[half-1]=1;
              half=0;
          }
      }  
      int old_count = count;
      cout << count<< endl;
      cout << half_p;
      half_p=n-1;
      while(count-1 !=0){
          if(arr[half_p]==1) { count--; cout << " " << half_p+1; } 
          half_p--;
      } 

      cout <<endl << n-old_count << endl;

      for(int i=0; i<n; ++i){
          if(arr[i]==0) cout << i+1 << " "; 
      }
      cout << endl;
  }
  else {
      cout << "NO" << endl;
  }


  return 0;
}
