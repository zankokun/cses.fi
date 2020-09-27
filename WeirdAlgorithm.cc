#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int64_t n;
  cin >> n;
  while(1){
    cout << n << ' ';
    if(n==1) break;
    if(n%2==0) n/=2;
    else n=n*3+1;
  }
  return 0;
}
