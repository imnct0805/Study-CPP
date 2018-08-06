#include <iostream>
using namespace std;
int main() {
	bool chk[31] = { false , };
	int cnt = 28;
	while (cnt--) {
		int num;
		cin >> num;
		chk[num] = true;
	}
	for (int i = 1; i <= 30; ++i)
		if (!chk[i]) printf("%d\n", i);
}