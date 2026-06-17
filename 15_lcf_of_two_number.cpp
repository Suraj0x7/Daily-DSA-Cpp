#include <bits/stdc++.h>
using namespace std;
int FinderOfGcd(int a, int b)
{
  if (b == 0)
    return a;

  return FinderOfGcd(b, a % b);
}
int main()
{
  int a, b;
  cin >> a >> b;
  int gcd = FinderOfGcd(a, b);
  int lcm = (a * b) / gcd;
  cout << "LCM is: " << lcm << endl;
  return 0;
}
