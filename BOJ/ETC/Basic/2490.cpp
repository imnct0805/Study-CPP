#include <iostream>
int main(){
	for (int j = 0; j < 3; ++j) {
		int d[4], cnt = 0;
		scanf("%d %d %d %d", &d[0], &d[1], &d[2], &d[3]);
		for (int i = 0; i < 4; ++i)
			if (d[i] == 1)		cnt++;
		if (cnt == 4) printf("E\n");
		else if (cnt == 3) printf("A\n");
		else if (cnt == 2) printf("B\n");
		else if (cnt == 1) printf("C\n");
		else printf("D\n");
	}
}