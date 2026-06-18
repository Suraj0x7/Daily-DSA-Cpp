#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    int temp = 0;
    if (arr[i] == 1)
    {
      temp++;
    }
    else if (arr[i + 1] != 1)
    {
      temp = 0;
    }
    ans = max(ans, temp);
  }
  cout << "Maxium Consecutive one is " << ans;
  return 0;
}