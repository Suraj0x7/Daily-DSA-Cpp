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

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    int highestFreq = 0;
    int highestElement = 0;

    for (auto it : mp)
    {
        if (it.second > highestFreq)
        {
            highestFreq = it.second;
            highestElement = it.first;
        }
    }

    int secondFreq = 0;
    int secondElement = -1;

    for (auto it : mp)
    {
        if (it.second < highestFreq && it.second > secondFreq)
        {
            secondFreq = it.second;
            secondElement = it.first;
        }
    }

    if (secondElement == -1)
    {
        cout << "No second highest occurring element found";
    }
    else
    {
        cout << "Second highest occurring element is " << secondElement;
    }

    return 0;
}