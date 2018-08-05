#include <iostream>
#include <string>
using namespace std;
int main() {
	int cnt = 0;
	string str;
	getline(cin, str);
	for (int i = 0; i < str.length(); ++i) {
		if ((isalpha(str[i]) > 0) && 
			(str[i + 1] == ' ' || str[i + 1] == NULL))
			cnt++;
	}
	printf("%d\n", cnt);
}