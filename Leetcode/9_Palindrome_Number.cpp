#include <bits/stdc++.h> 

using namespace std; 

class Solution {
public:
    static bool isPalindrome(int x) {
         
         int val=0;
         int y = x;
       while(x > 0){
            int k = x%10;
            if(val>INT_MAX/10 || val<INT_MIN/10){
                return 0;
            }
            val=val*10+k;
            x=x/10;
       }
    
        if (val == y) {
            return true;
        } else {
            return false;
        }
    }
};

int main () 
{
    int x;
    cin>>x;
    int val = Solution::isPalindrome(x);
    // cout << val;
}