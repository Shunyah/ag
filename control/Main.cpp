#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int value[20] = {429,357,355,289,139,101,80,79,61,60,59,37,36,25,23,22,10,7,6,1};
    int sum;
    int i = 0;
    cin >> sum;
   while (sum > 0)
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
