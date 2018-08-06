#include <iostream>
#include <string>
using namespace std;
int main() {
	string a, b, resAnd, resOr, resXor, resNotA, resNotB;
	cin >> a >> b;
	for (int i = 0; i < a.length(); ++i) {
		if (a[i] == '0')			resNotA += '1';
		else if (a[i] == '1')			resNotA += '0';
		if (b[i] == '0')			resNotB += '1';
		else if (b[i] == '1')			resNotB += '0';
			
		if (a[i] == b[i]) {
			resXor += '0';
			if (a[i] == '1') {
				resAnd += '1';
				resOr += '1';
			}
			else if (a[i] == '0') {
				resAnd += '0';
				resOr += '0';
			}
		}
		else if (a[i] != b[i]) {
			resXor += '1';
			resOr += '1';
			resAnd += '0';
		}
	}
	cout << resAnd << endl;
	cout << resOr << endl;
	cout << resXor << endl;
	cout << resNotA << endl;
	cout << resNotB << endl;
}