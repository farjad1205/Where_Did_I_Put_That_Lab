#include <iostream>
#include <string>
using namespace std;

int find(const string target, const string given)
{
    if (target.empty())
        return 0;

    for (int start = 0; start < given.length(); start++)
    {
        int tIndex = 0;
        int gIndex = start;
        int matchStart = -1;

        while (tIndex < target.length() && gIndex < given.length())
        {
            if (target[tIndex] == given[gIndex])
            {
                if (matchStart == -1)
                {
                    matchStart = gIndex;
                }
                tIndex++;
            }
            gIndex++;
        }

        if (tIndex == target.length())
        {
            return matchStart;
        }
    }

    return -1;
}

int find(const char target, const string given)
{
    for (int i = 0; i < given.length(); i++)
    {
        if (given[i] == target)
        {
            return i;
        }
    }

    return -1;
}