#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    static int divisorSubstrings(int num, int k)
    {

        int x = 0, count = 0;
        string temp;
        string sNum = to_string(num);
        cout << sNum << endl;
        
        for (int i = 0; i <= sNum.size()-k; i++)
        {
            temp = sNum.substr(i,k);
            cout << temp << endl;

            x = stoi(temp);
            cout << "x: " << x << endl;
            if (x == 0)
            {
                continue;
            }
            else if (num % x == 0)
            {
                count++;
                cout << "count: " << count << endl;
            }
        }
        cout << "count = " << count;
        if (count == k)
        {
            return k;
        }
        return count;
    }
};

int main()
{
    int x, y;
    cin >> x >> y;
    int val = Solution::divisorSubstrings(x, y);
    cout << endl
         << val;
}