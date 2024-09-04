#include <bits/stdc++.h> 

using namespace std; 

    class Solution {
public:
    static bool divisorGame(int n) {
        
        // As alice will always win if n = 2
        return n % 2 == 0;
    }
};

 int main()
{
int x;
cin >> x;
int val = Solution::divisorGame(x);
cout << endl << val;
}