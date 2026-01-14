#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        // Removing Duplicates
        if (nums.empty())
            return 0;

        int x = 1;

        for (int i = 1; i < nums.size(); i++)
        {
            cout << "nums[i]: " << nums[i] << " i: " << i << endl;
            if (nums[i] != nums[x - 1])
            {
                nums[x] = nums[i];
                x++;
            }
        }

        // Print nums
        for (int l = 0; l < nums.size(); l++)
        {
            cout << nums[l] << ", ";
        }
        return x;
    }
};

int main()
{
    vector<int> x;
    int n, num;

    cout << "Enter number of Inputs: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        x.push_back(num);
    }

    Solution solution;
    int val = solution.removeDuplicates(x);
    cout << endl
         << val;
}