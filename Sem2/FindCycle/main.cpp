#include "find_cycle.h"
#include "../lib/SinglyLinkedList.h"

int main()
{
    SinglyLinkedList<int> a;
    int i, j;
    cin >> i;
    while (cin >> j)
    {
        a.push_back(j);
    }
    if (i >= 0)
    {
        a.create_cycle(i);
    }
    cout << find_cycle(a.begin(), a.end()) << '\n';
}