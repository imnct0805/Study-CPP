#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a == 60 && b == 60 && c == 60)
		printf("Equilateral\n");
	else if (a + b + c != 180)
		printf("Error\n");
	else if (a + b + c == 180) {
		if (a == b || b == c || a == c)
			printf("Isosceles\n");
		else
			printf("Scalene\n");
	}
}	