#include <iostream>
#include "test.h"

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    cout << "Sum: " << Sum(n, m) << '\n';
    cout << "Multiple: " << Multiple(n, m);
}