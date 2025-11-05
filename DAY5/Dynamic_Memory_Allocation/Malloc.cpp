// Malloc (Memory Allocation)
// Heap
// Memory is always uninitialized(garbage values)
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int n = 4;
    int *ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        cout << "Memory allocation failed!" << endl;
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        ptr[i] = (i + 1);
    }
    cout << "Array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ptr[i] << " ";
    }

    free(ptr);
    ptr = nullptr;
    return 0;
}