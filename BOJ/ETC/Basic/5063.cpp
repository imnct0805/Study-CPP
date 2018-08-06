#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int r, e, c;
		cin >> r >> e >> c;
		if (r > (e - c))
			printf("do not advertise\n");
		else if (r < (e - c))
			printf("advertise\n");
		else
			printf("does not matter\n");
	}
}