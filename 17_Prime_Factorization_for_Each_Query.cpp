#include <bits/stdc++.h>
using namespace std;

vector<int> primefactors(int n)
{
  vector<int> factors;

  for (int i = 2; i * i <= n; i++)
  {
    while (n % i == 0)
    {
      factors.push_back(i);
      n = n / i;
    }
  }

  if (n > 1)
  {
    factors.push_back(n);
  }

  return factors;
}

vector<vector<int>> solve(vector<int> &queries)
{
  vector<vector<int>> ans;

  for (int num : queries)
  {
    ans.push_back(primefactors(num));
  }

  return ans;
}

int main()
{
  int n;
  cin >> n;

  vector<int> queries(n);

  for (int i = 0; i < n; i++)
  {
    cin >> queries[i];
  }

  vector<vector<int>> ans = solve(queries);

  for (auto it : ans)
  {
    cout << "[";

    for (int i = 0; i < it.size(); i++)
    {
      cout << it[i];

      if (i != it.size() - 1)
      {
        cout << ",";
      }
    }

    cout << "]" << endl;
  }

  return 0;
}