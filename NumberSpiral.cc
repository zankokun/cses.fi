#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int64_t n;
  std::cin >> n;
  std::vector <std::pair<int64_t, int64_t> > input(n);
  for (auto &x : input)
    std::cin >> x.first >> x.second;


  for (auto x : input)
  {
    int64_t ans;
    if (x.first > x.second)
    {
      if (x.first % 2 == 0)
      {
        ans = x.first * x.first - x.second + 1;
      } else
      {
        ans = (x.first - 1) * (x.first - 1) + x.second;
      }
    } else

    {
      if (x.second % 2 != 0)
      {
        ans = x.second * x.second - x.first + 1;
      } else
      {
        ans = (x.second - 1) * (x.second - 1) + x.first;
      }
    }
    cout << ans << endl;
  }
  return 0;
}
