#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	while (1) {
		getline(cin, str);
		if (str == "#")
			break;
		int cnt = 0;
		for (int i = 0; i < str.length(); ++i) {
			if (str[i] == 'a' || str[i] == 'A'
				|| str[i] == 'e' || str[i] == 'E'
				|| str[i] == 'i' || str[i] == 'I'
				|| str[i] == 'o' || str[i] == 'O'
				|| str[i] == 'u' || str[i] == 'U')
				cnt++;
		}
		printf("%d\n", cnt);
	}
}