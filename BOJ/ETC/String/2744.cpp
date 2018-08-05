#include <iostream>
#include <string.h>
using namespace std;
int main() {
	char c[101];
	scanf("%s", c);
	int len = strlen(c);
	for (int i = 0; i < len; ++i) {
		if (isupper(c[i]))
			c[i] = tolower(c[i]);
		else
			c[i] = toupper(c[i]);
	}
	printf("%s\n", c);
}