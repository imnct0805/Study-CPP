#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	getchar();
	while (n--) {
		string str;
		getline(cin, str);
		str[0] = toupper(str[0]);
		cout << str << endl;
	}
}