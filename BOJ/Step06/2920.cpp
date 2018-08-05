#include <iostream>
int main() {
	int d[8];
	bool chka = false, chkd = false, chkm = false;
	for (int i = 0; i < 8; ++i) {
		scanf("%d", &d[i]);
		if (i > 1) {
			if (d[i] - 1 == d[i - 1]) chka = true;
			else if (d[i - 1] - 1 == d[i]) chkd = true;
			else chkm = true;
		}
	}
	if (chkm) {
		printf("mixed\n");
		return 0;
	}
	if (chka && !chkd)
		printf("ascending\n");
	else if (!chka && chkd)
		printf("descending\n");
}