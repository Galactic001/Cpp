#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    static int fib(int n)
    {
        int t1 = 0, t2 = 1, nextTerm;
        int i;

        if ( n == 0)
        {
            return 0;
        }

        for (i = 1; i <= n; i++)
        {
            if (i == 1)
            {
                nextTerm = t2;
                cout << nextTerm << ", ";
                continue;
            }

            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
            cout << nextTerm << ", ";
        }
        return nextTerm;
    }
};

int main()
{
    int x;
    cin >> x;
    int val = Solution::fib(x);
    cout << endl
         << val;
}