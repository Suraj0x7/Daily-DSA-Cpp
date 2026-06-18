#include <bits/stdc++.h>
using namespace std;
bool LinearSearch(vector<int> &arr, int n, int target)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == target)
    {
      return true;
      break;
    }
  }
  return false;
}
int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int target;
  cin >> target;
  if (LinearSearch(arr, n, target))
  {
    cout << "Given Target Found it" << endl;
  }
  else
  {
    cout << "Given Target Not Found" << endl;
  }
}