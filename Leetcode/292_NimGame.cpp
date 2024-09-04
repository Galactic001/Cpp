#include <bits/stdc++.h> 

using namespace std; 

    class Solution {
public:
    static bool canWinNim(int n) {
        return n % 4 != 0;
    }
};

 int main()
{
int x;
cin >> x;
bool val = Solution::canWinNim(x);
cout << endl << val;
}