#include <iostream>
using namespace std;
int main() {
	int n, cute = 0, ncute = 0;
	cin >> n;
	while (n--) {
		int num;
		cin >> num;
		if (num == 1)			cute++;
		else			ncute++;
	}
	if (cute > ncute)		printf("Junhee is cute!\n");
	else		printf("Junhee is not cute!\n");
}