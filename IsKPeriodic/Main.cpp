#include <iostream>
#include <string>
using namespace std;

bool IsKPeriodic(const string& str, int k)
{
    if (k <= 0)
    {
        return false;
    }

    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }

    if (len == 0)
    {
        return false;
    }

    if (len % k != 0)
    {
        return false;
    }

    for (int i = k; i < len; i += k)
    {
        for (int j = 0; j < k; j++)
        {
            if (str[j] != str[i + j])
            {
                return false;
            }
        }
    }

    return true;
}