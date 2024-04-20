#include <bits/stdc++.h>
#define PI 3.14159265359

using namespace std;

double areaSwitchCase(int ch, vector<double> a) {
	// Write your code here
	switch (ch)
    {
    case 1:
        //Area of the circle
        return PI*a[0]*a[0];
        break;
    case 2:
        //Area of the rectangle
        return a[0]*a[1];
        break;
    default:
        break;
    }
    return -1;
	
}
