#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int n;
  cin >> n;
  vector<int> a, b;
  if (n<3) {
      cout << "NO" << endl;
      return 0;
  }
  int64_t sum = (((1+n)*n)/2 );
  if(sum % 2 ==0){
      int64_t temp=0;
      int64_t curr=n;
      while(temp!=sum/2 || curr!=0 ){
          if(temp+curr<=sum/2){
            a.push_back(curr);
            temp+=curr;
          }
          else b.push_back(curr);
          curr--;
      }
      cout << "YES\n" <<  a.size()<< endl;
      for(auto& i: a) cout << i<< " ";
      cout << endl;
      cout << b.size() << endl;
      for(auto& i: b) cout << i <<" ";
      cout <<endl;
  }
  else {
      cout << "NO" << endl;
  }


  return 0;
}
