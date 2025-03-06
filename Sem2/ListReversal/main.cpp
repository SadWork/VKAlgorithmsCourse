#include "../lib/SinglyLinkedList.h"

int main()
{
    SinglyLinkedList<int> a;
    int i;
    while (cin >> i)
    {
        a.push_back(i);
    }
    cout << "before\n";
    for (auto &i : a)
    {
        cout << i << ' ';
    }
    cout << "\nafter\n";
    a.reverse();
    for (auto &i : a)
    {
        cout << i << ' ';
    }
}