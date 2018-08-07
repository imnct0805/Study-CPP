#include <iostream>
#include <string.h>
using namespace std;
int main() {
	char c[5];
	scanf("%s", c);
	int len = strlen(c);
	if (len == 2)
		cout << (atoi(c)  / 10) + (atoi(c) % 10) << endl;
	else if (len == 3) {
		if (c[1] == '0')
			cout << ((atoi(c) / 100) * 10 + (atoi(c) % 100 / 10)) + (atoi(c) % 10) << endl;
		else
			cout << ((atoi(c) / 100) + ((atoi(c) % 100 / 10) * 10 + (atoi(c) % 10))) << endl;
	}
	else if (len == 4)
		cout << 20 << endl;
}