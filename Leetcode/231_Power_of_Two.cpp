#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    static bool isPowerOfTwo(int n)
    {
        while (n != 0)
        {
            // Only divide by 2 if number is factor of 2
            if (n % 2 == 0)
            {
                n = n / 2;
                cout << n << endl;
            }
            else
            {
                // Check if remainder is 1 or not
                if (n == 1)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }

        return n == 1;
    }
};

int main()
{
    int x;
    cin >> x;
    bool val = Solution::isPowerOfTwo(x);
    cout << endl
         << val;
}