#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    static int strStr(string haystack, string needle)
    {
        int x = haystack.find(needle);
        return x;
    }
};

int main()
{
    string x = "but";
    string y = "sad";
    // cin >> x;
    int val = Solution::strStr(x,y);
    cout << endl
         << val;
}