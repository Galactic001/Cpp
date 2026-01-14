#include <bits/stdc++.h>

using namespace std;

// 1. Working but time limit exceeding due to sorting method
// class Solution
// {
// public:
//     static bool containsDuplicate(vector<int> &nums)
//     {
//         for (int i = 0; i < nums.size(); i++)
//         {
//             int j = 0, temp = 0;
//             while (j < nums.size()-1)
//             {
//                 if (nums[j] > nums[j + 1])
//                 {
//                                                 // cout << "nums " << nums[j] << " " << nums[j + 1] << endl;
//                     temp = nums[j + 1];
//                                                 // cout << "temp " << temp << " " << nums[j + 1] << endl;
//                     nums[j + 1] = nums[j];
//                                                 // cout << "nums[i+1] " << nums[j + 1] << " " << nums[j] << endl;
//                     nums[j] = temp;
//                                                 // cout << "nums[i] " << nums[j] << " " << temp << endl;
//                     j++;
//                     cout << endl;
//                 }
//                 else
//                 {
//                     j++;
//                 }
//             }
//         }
//         // Print vector<int> &nums
//         cout << "The vector contains: ";
//         for (int num : nums)
//         {
//             cout << num << " ";
//         }
//         cout << endl;
//
//         // Check Duplicate's
//         for(int k = 0; k < nums.size()-1; k++)
//         {
//             cout << endl << k << " " << nums[k] << " " << endl;
//             if (nums[k] == nums[k+1])
//             {
//                 return true;
//             }
//         }
//         return false;
//     }
// };

// 2. Working
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 1; i < n; i++)
        {
            if (nums[i] == nums[i - 1])
                return true;
        } 
        return false;
    }
};

int main()
{
    vector<int> x;
    int n, num;
    cout << "Enter the elements: ";
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> num;
        x.push_back(num);
    }

    Solution solution;
    bool val = solution.containsDuplicate(x);
    cout << val;
}