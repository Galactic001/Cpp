#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    static string losingPlayer(int x, int y)
    {

        int count = 0;

        while (x >= 1 && y >= 4)
        {
            x = x - 1;
            y = y - 4;
            count++;
        }
        if (count % 2 != 0)
        {
            return "Alice";
        }
        return "Bob";
    }
};

int main()
{
    int x, y;
    cin >> x >> y;
    string val = Solution::losingPlayer(x, y);
    cout << endl
         << val;
}