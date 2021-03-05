#include <bits/stdc++.h>
using namespace std;

void print(int count, const int& i){
    while(--count >= 0){
        cout<< ((i&(1<<count))?1:0);
    }
    cout << endl;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int n;
  cin >> n;
  if (1==n) {cout << "0\n1"; return 0;}
  vector<int> vec = {0,1,3,2};
  int i=2;
  while(i++ <n){
      for(int k=(1<<(i-1))-1; k>=0; --k){
          vec.push_back((vec[k]<<1)|1);
          vec[k]=vec[k]<<1;
      }
  }
  for(const auto& k:vec){
    print(n, k);
  }

  return 0;
}
