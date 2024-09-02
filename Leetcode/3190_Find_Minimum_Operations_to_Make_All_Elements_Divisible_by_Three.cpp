#include <bits/stdc++.h> 

using namespace std; 

    class Solution {
public:
    static int minimumOperations(vector<int>& nums) {
        
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 3 != 0)
            {
                count++;
            }

        }
        return count;
    }
};

 int main()
{
vector<int> x = {1, 2, 3, 4};
// cin >> x;
int val = Solution::minimumOperations(x);
cout << endl << val;
}