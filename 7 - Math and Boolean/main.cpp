#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Max and min
    cout << max(5, 10) << endl;
    cout << min(5, 10) << endl;

    // <cmath> Header
    cout << sqrt(64) << endl;
    cout << round(2.6) << endl;
    cout << log(2) << endl;

    // Boolean
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun << endl;
    cout << isFishTasty << endl;

    // Boolean Expression (>, <, == , !=, >=, <=)
    int x = 10;
    int y = 9;
    cout << (x > y) << endl;
    cout << (10 > 9) << endl;
    cout << (x == 10) << endl;
    cout << (10 == 15) << endl;
    return 0;
}
