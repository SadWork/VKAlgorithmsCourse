#include "../lib/SinglyLinkedList.h"

int main()
{
    SinglyLinkedList<int> a;
    int i;
    while (cin >> i)
    {
        a.push_back(i);
    }
    cout << *a.mid() << '\n';
}