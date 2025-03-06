#include "../lib/SinglyLinkedList.h"

int main()
{
    int j;
    cin >> j;
    SinglyLinkedList<int> a;
    int i;
    while (cin >> i)
    {
        a.push_back(i);
    }
    cout << "\nbefore\n";
    for (auto &i : a)
    {
        cout << i << ' ';
    }
    cout << "\nafter\n";
    int found = a.erase(j);
    cout << "deleted: " << found << "\n";
    for (auto &i : a)
    {
        cout << i << ' ';
    }
}