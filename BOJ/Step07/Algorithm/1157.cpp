#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	int cnt[26] = { 0, }, max = -1;
	char c;
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); ++i) {
		str[i] = toupper(str[i]);
		cnt[str[i] - 65] ++;
	}
	for (int i = 0; i < 26; ++i) {
		if (max < cnt[i]) {
			max = cnt[i];
			c = i + 65;
		}
	}
	sort(cnt, cnt + 26);
	if (cnt[24] == max)
		printf("?\n");
	else
		printf("%c\n", c);
}