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

  int ans = -1;

  for (int i = 0; i <= n; i++)
  {
    if (find(arr.begin(), arr.end(), i) == arr.end())
    {
      ans = i;
      break; // missing number found, so stop loop
    }
  }

  cout << "Missing Element of array " << ans << endl;

  return 0;
}