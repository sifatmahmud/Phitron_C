#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> mylist = {20, 40, 30, 10, 50, 10, 10};
    // mylist.remove(10);
    // mylist.sort();
    // mylist.sort(greater<int>());
    // mylist.unique();

    mylist.reverse();
    for (int val : mylist)
        cout << val << endl;

    return 0;
}