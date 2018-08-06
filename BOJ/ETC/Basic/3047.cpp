#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	int a[3];
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a + 3);
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); ++i) {
		if (str[i] == 'A')			printf("%d ", a[0]);
		else if (str[i] == 'B')			printf("%d ", a[1]);
		else if (str[i] == 'C')			printf("%d ", a[2]);
	}
}