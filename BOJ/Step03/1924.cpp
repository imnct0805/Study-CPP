#include <cstdio>
int main() {
	int day[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	char mon[7][4] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	int x, y, res = 0;
	scanf("%d %d", &x, &y);
	for (int i = 0; i < x - 1; ++i)
		res += day[i];
	printf("%s\n", mon[(res + y) % 7]);
}