#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  string s;
  cin >> s;
  array<int, 26> chars{0};

  for (const auto &c : s)
  {
    chars[c - 'A']++;
  }

  int odd = count_if(chars.begin(), chars.end(), [](int x) { return x % 2 == 1; });
  if (odd > 1)
  {
    cout << "NO SOLUTION\n";
    return 0;
  }
  int a = 0, b = s.size() - 1;
  for (int i = 0; i < 26; ++i)
  {
    while (chars[i] > 0)
    {
      if (chars[i] == 1)
      {
        s[s.size() / 2] = i + 'A';
        break;
      }
      chars[i] -= 2;
      s[a++] = i + 'A';
      s[b--] = i + 'A';

    }
  }

  cout << s << endl;
  return 0;
}
