#include <bits/stdc++.h> 

using namespace std; 

    class Solution {
public:
    static bool isPowerOfFour(int n) {

        if (n == 0) {
            return false;
        }
        if (n % 4 == 0) {
            return isPowerOfFour(n / 4);
        }
        return n == 1;
    }
};

 int main()
{
int x;
cin >> x;
int val = Solution::isPowerOfFour(x);
cout << endl << val;
}