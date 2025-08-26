#include <iostream>
#include <cassert>
#include "strextra.h"

int main()
{
    assert(find('e', "the quick brown fox") == 2);
    assert(find(' ', "the quick brown fox") == 3);
    assert(find("e", "the quick brown fox") == 2);
    assert(find("quick", "the quick brown fox") == 4);
    assert(find("quiet", "the quick brown fox") == -1);
    assert(find("cow", "the quick brown fox") == 7);
    assert(find("hix", "the quick brown fox") == 1);
    assert(find("112", "11112") == -1);

    // Empty search
    assert(find("", "Hello") == 0);
    assert(find("", "") == 0);
    // Empty text
    assert(find("a", "") == -1);
    assert(find('a', "") == -1);

    // Beginning / end matches
    assert(find('a', "apple") == 0);
    assert(find("app", "apple") == 0);
    assert(find('e', "apple") == 4);
    assert(find("ple", "apple") == 2);

    // Multiple occurrences
    assert(find('a', "banana") == 1);
    assert(find("ana", "banana") == 1);

    cout << "no errors" << endl;
    return 0;
}