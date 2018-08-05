#include <iostream>
#include <string>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int res = 0, cnt = 0;
		string str;
		cin >> str;
		for (int i = 0; i < str.length(); ++i) {
			if (str[i] == 'O') {
				cnt++;
				res += cnt;
			}
			if (str[i] == 'X')
				cnt = 0;
		}
		printf("%d\n", res);
	}
}