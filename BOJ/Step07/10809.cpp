#include <iostream>
#include <string>
using namespace std;
int main() {
	int pos[26];
	for (int i = 0; i < 26; ++i)
		pos[i] = -1;
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); ++i)
		if(pos[str[i] - 97] == -1)	pos[str[i] - 97] = i;
	for (int i = 0; i < 26; ++i)
		printf("%d ", pos[i]);
}