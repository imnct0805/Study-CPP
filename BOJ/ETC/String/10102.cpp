#include <iostream>
#include <string>
using namespace std;
int main() {
	int v, a = 0, b = 0;
	string str;
	cin >> v;
	cin >> str;
	for (int i = 0; i < str.length(); ++i) {
		if (str[i] == 'A') a++;
		else b++;
	}
	if (a > b)		printf("A\n");
	else if (a < b)		printf("B\n");
	else		printf("Tie\n");
}