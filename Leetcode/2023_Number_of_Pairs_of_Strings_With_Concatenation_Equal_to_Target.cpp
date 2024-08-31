#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    static int numOfPairs(vector<string> &nums, string target)
    {

        int x = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {

                if (i != j && nums[i] + nums[j] == target)
                {
                    x++;
                }
            }
        }
        return x;
    }
};

int main()
{
    vector<string> x = {"777", "7", "77", "77"};
    string y = "7777";
    // cin >> y;
    int val = Solution::numOfPairs(x, y);
    cout << endl
         << val;
}