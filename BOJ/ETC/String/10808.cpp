#include <iostream>
#include <string>
using namespace std;
int main() {
	int d[26] = { 0, };
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); ++i) 
		d[str[i] - 97]++;
	for (int i = 0; i < 26; ++i)
		printf("%d ", d[i]);
}