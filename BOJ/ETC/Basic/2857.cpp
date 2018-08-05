#include <iostream>
#include <string>
using namespace std;
int main() {
	int cnt = 1, d[5], c = 0;
	while (cnt != 6) {
		string str;
		cin >> str;
		for (int i = 1; i < str.length(); ++i) {
			if (str[i - 1] == 'F' && str[i] == 'B' && str[i + 1] == 'I'){
				d[c++] = cnt;
				break;
			}
		}
		cnt++;
	}
	if (d[0] > 0)
		for (int i = 0; i < c; ++i)
			printf("%d ", d[i]);
	else
		printf("HE GOT AWAY!\n");
}