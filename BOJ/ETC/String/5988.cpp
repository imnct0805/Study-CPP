#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	while (n--) {
		string str;
		cin >> str;
		if ((int)(str[str.length() - 1] - '0') % 2 == 0)
			printf("even\n");
		else
			printf("odd\n");
	}
}