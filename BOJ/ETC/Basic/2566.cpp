#include <iostream>
using namespace std;
int main(){
	int board[10][10], max = 0, mi, mj;
	for (int i = 1; i < 10; ++i) {
		for (int j = 1; j < 10; ++j) {
			scanf("%d", &board[i][j]);
			if (max < board[i][j]) {
				max = board[i][j];
				mi = i;
				mj = j;
			}
		}
	}
	printf("%d\n%d %d\n", max, mi, mj);
}