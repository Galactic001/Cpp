#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    static bool isPowerOfThree(int n)
    {
        
        while (n != 0)
        {
            if (n % 3 == 0)
            {
                n /= 3;
                cout << n << endl;
            }
            else
            {
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
    bool val = Solution::isPowerOfThree(x);
    cout << endl
         << val;
}