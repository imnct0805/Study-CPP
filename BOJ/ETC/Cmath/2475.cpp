#include <iostream>
using namespace std;
int main() {
	int a[5];
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
	cout << (int)(pow(a[0], 2) + pow(a[1], 2) + pow(a[2], 2) + pow(a[3], 2) + pow(a[4], 2)) % 10 << endl;
}