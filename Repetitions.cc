#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int  max=1, l=1;
  char prev, curr;
  cin.get(prev);
  while(curr!='\n' && curr !=EOF ){
    cin.get(curr);
    if(prev==curr) ++l;
    else {
      if(l>max){max = l;}
      l = 1;
    }
    prev = curr;
  }
  if(l>max) max = l;


  cout << max;


  return 0;
}
