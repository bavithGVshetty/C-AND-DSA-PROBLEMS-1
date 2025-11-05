#include <iostream>
using namespace std;

void TowerOfHonoi(int n, char S, char H, char D)
{
    if (n == 0 || n < 0)
    {
        cout << "No disk" << endl;
        return;
    }
    if (n == 1)
    {
        cout << "Moved disk 1 from " << S << " to " << D << endl;
        return;
    }
    TowerOfHonoi(n - 1, S, D, H);

    cout << "Move disk" << n << " from " << S << " to " << D << endl;

    TowerOfHonoi(n - 1, H, S, D);
}

int main()
{
    int n;
    cout << "Enter number of disks: ";
    cin >> n;
    TowerOfHonoi(n, 'A', 'B', 'C');
}