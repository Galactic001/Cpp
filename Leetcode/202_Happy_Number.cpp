#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    static bool isHappy(int n)
    {
        int x = 0, sum = 0;
        while (n != 0)
        {
            x = n % 10;
            n /= 10;
            sum = sum + (x * x);
            cout << sum << " " << x << endl;
        }
        cout << "sum :" << sum << endl;

        if ( sum == 1)
        {
            return 1;
        }
        if (sum == 4)
        {
            return false;
        }
        return isHappy(sum);
    }
};

int main()
{
    int x;
    cin >> x;
    bool val = Solution::isHappy(x);
    cout << endl
         << val;
}