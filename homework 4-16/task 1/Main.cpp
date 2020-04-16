
#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int value[6] = { 500,200,100,50,20,10 };
    int sum;
    int i = 0;
    cin >> sum;
    if (sum % 10 != 0) {
        count = -1;
    }
    else while (sum > 0)
    {
        if (sum >= value[i])
        {
            sum = sum - value[i];
            count++;
        }
        else
            i++;
    }
    cout << count;
}