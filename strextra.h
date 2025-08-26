#include <iostream>
#include <string>
using namespace std;

int find(const string target, const string given)
{
    for (int i = 0; i < given.length() - target.length(); i++)
    {
        if (target == given.substr(i, target.length()))
        {
            return i;
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