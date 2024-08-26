#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    static int reverse(int x) {
       int val=0;
       while(x!=0){
            int k = x%10;
            if(val>INT_MAX/10 || val<INT_MIN/10){
                return 0;
            }
            val=val*10+k;
            x=x/10;
       }
       return val;
    }
};

int main () 
{
    int x;
    cin>>x;
    int val = Solution::reverse(x);
    cout << val;
}