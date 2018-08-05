#include <iostream>
#include <string>
using namespace std;
int main() {
	bool chk[26];
	int t, cnt = 0;
	cin >> t;
	while (t--) {
		bool chk[26], tmp = false;
		for (int i = 0; i < 26; ++i)
			chk[i] = false;
		string str;
		cin >> str;
		for (int i = 0; i < str.length(); ++i) {
			if (chk[str[i] - 97] == false) {
				chk[str[i] - 97] = true;
				while (1) {
					if (str[i + 1] != str[i])	break;
					i++;
				}
			}
			else
				tmp = true;
		}
		if (!tmp) cnt++;
	}
	printf("%d\n", cnt);
}