#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout << "Enter Array1 size" << endl;
  cin >> n;
  vector<int> arr(n);
  cout << "Enter the array" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int m;
  cout << "Enter Array2 size" << endl;
  cin >> m;
  vector<int> brr(m);
  cout << "Enter the array" << endl;
  for (int i = 0; i < m; i++)
  {
    cin >> brr[i];
  }

  int i = 0;
  int j = 0;
  sort(arr.begin(), arr.end());
  sort(brr.begin(), brr.end());
  vector<int> ans;
  while (i < n && j < m)
  {
    if (arr[i] == brr[j])
    {
      if (ans.empty() || ans.back() != arr[i])
      {
        ans.push_back(arr[i]);
      }
      i++;
      j++;
    }
    else if (arr[i] < brr[j])
    {
      i++;
    }
    else
    {
      j++;
    }
  }
  for (auto it : ans)
  {
    cout << it << " ";
  }
  return 0;
}