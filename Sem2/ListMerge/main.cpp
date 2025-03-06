#include "../lib/SinglyLinkedList.h"
#include "list_merge.h"

int main()
{
    SinglyLinkedList<int> a, b;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        int j;
        cin >> j;
        a.push_back(j);
    }
    for (int i = 0; i < m; ++i)
    {
        int j;
        cin >> j;
        b.push_back(j);
    }
    list_merge(a, b);
    for (auto &i : a)
    {
        cout << i << ' ';
    }
    return 0;
}