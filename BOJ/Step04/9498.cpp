#include <iostream>
using namespace std;
int main() {
	int num;
	scanf("%d", &num);
	if (num <= 100 && num >= 90)		printf("A\n");
	else if (num <= 89 && num >= 80)		printf("B\n");
	else if (num <= 79 && num >= 70)		printf("C\n");
	else if (num <= 69 && num >= 60)		printf("D\n");
	else		printf("F\n");
}