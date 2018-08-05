#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	while (1) {
		bool chk[26] = { false, };
		int cnt = 0;
		getline(cin, str);
		if (str == "*")
			break;
		for (int i = 0; i < str.length(); ++i)
			chk[str[i] - 97] = true;
		
		for (int i = 0; i < 26; ++i)
			if (chk[i] == true)
				cnt++;
		if (cnt == 26)
			printf("Y\n");
		else
			printf("N\n");
	}
}