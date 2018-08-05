#include <iostream>
using namespace std;
int main() {
	char c[7];
	cin >> c;
	int dec;
	dec = (int)strtol(c, NULL, 16);
	cout << dec << endl;
}