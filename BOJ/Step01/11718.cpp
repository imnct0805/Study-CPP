#include <cstdio>
int main() {
	char c;
	while (1) {
		c = getchar();
		if (c == EOF)
			break;
		putchar(c);
	}
}