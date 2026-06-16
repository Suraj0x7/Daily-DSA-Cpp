#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int temp = n;
  int sum = 0;
  while (n)
  {
    int digit = n % 10;
    sum += digit * digit * digit;
    n /= 10;
  }
  if (sum == temp)
  {
    cout << temp << " is an Armstrong number" << endl;
  }
  else
  {
    cout << temp << " is not an Armstrong number" << endl;
  }
  return 0;
}