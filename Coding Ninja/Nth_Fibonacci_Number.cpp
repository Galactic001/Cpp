#include<bits/stdc++.h>
using namespace std;

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n, i, t1 = 0, t2 = 1, nextTerm = 0;

        cin >> n;

        for (i = 1; i <= n; i++) {
                if (i == 1) {
                        continue;
                }
                if (i == 2) {
                        continue;
                }
                nextTerm = t1 + t2;
                t1 = t2;
                t2 = nextTerm;
                }

        std::cout << nextTerm << std::endl;

        return 0;
}