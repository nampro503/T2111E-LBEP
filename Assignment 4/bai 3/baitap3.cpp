#include <iostream>
using namespace std; 
 
int main()
{
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    cout << "Tat ca cac so chan tu 1 den " << n << " la:";
    for (int i = 1; i < n; i++) {
        if (i % 2 == 0) {
            cout << " " << i;
        }
    }
    return 0;
}
