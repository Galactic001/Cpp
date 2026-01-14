#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        for (int i = 0; i < min(m,n); i++)
        {
            cout << nums1[i] << ", ";
            cout << nums2[i] << ", ";
        }

        if (m>n)
        {
            for (int j = n; j < m; j++)
            {
                cout << nums1[j] << ", ";
            }
        }
        else{
            for(int k = m; k < n; k++)
            {
                cout << nums2[k] << ", ";
            }
        }
    }
};

int main()
{
    int m, n;
    cin >> m >> n;
    vector<int> x(m);
    vector<int> y(n);
    for (auto &it : x)
    {
        cin >> it;
    }
    for (auto &it : y)
    {
        cin >> it;
    }

    Solution solution;
    solution.merge(x,m,y,n);
    // int val = solution.merge(x, m, y, n);
    // cout << endl
        //  << val;
}