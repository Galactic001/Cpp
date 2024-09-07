#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    static int distanceTraveled(int mainTank, int additionalTank)
    {
        int d=0;
        while(mainTank>=5 && additionalTank>=1)
        {
            d+=(10*5);
            mainTank-=5;
            mainTank+=1;
            additionalTank-=1;
        }
        return d+mainTank*10;

        // Not Working need to correct

        // int count = 0;

        // for (int i = 0; i <= mainTank; i++)
        // {
        //     if (mainTank >= 5 && additionalTank > 0)
        //     {
        //         mainTank = mainTank - 4;
        //         additionalTank--;
        //         count++;
        //     }
        //     cout << mainTank << " count: " << count << endl;
        // }
        // cout << "mainTank :" << mainTank;
        // return count * 50 + mainTank * 10;
    }
};

int main()
{
    int x, y;
    cin >> x >> y;
    int val = Solution::distanceTraveled(x, y);
    cout << endl
         << val;
}