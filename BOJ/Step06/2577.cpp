#include <iostream>
#include <string>
using namespace std;
int main() {
	int a, b, c, num[10] = { 0, };
	scanf("%d %d %d", &a, &b, &c);
	string str = to_string(a * b * c);
	for (int i = 0; i < str.length(); ++i)
		num[str[i] - '0']++;
	for (int i = 0; i < 10; ++i)
		printf("%d\n", num[i]);
}