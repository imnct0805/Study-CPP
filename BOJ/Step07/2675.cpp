#include <iostream>
#include <string>
using namespace std;
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int r;
		string str;
		cin >> r >> str;
		for (int i = 0; i < str.length(); ++i) {
			for (int j = 0; j < r; ++j)
				printf("%c", str[i]);
		}
		printf("\n");
	}
}