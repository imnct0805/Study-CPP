#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	while (getline(cin, str)) {
		int upperCnt = 0, lowerCnt = 0, numCnt = 0, blankCnt = 0;
		for (int i = 0; i < str.length(); ++i) {
			if (isupper(str[i]))
				upperCnt++;
			else if (islower(str[i]))
				lowerCnt++;
			else if (str[i] >= '0' && str[i] <= '9')
				numCnt++;
			else if (str[i] == ' ')
				blankCnt++;
		}
		printf("%d %d %d %d\n", lowerCnt, upperCnt, numCnt, blankCnt);
	}
}