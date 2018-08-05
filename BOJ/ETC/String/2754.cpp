#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	cin >> str;
	if (str == "A+")
		printf("4.3\n");
	else if (str == "A0")
		printf("4.0\n");
	else if (str == "A-")
		printf("3.7\n");
	else if (str == "B+")
		printf("3.3\n");
	else if (str == "B0")
		printf("3.0\n");
	else if (str == "B-")
		printf("2.7\n");
	else if (str == "C+")
		printf("2.3\n");
	else if (str == "C0")
		printf("2.0\n");
	else if (str == "C-")
		printf("1.7\n");
	else if (str == "D+")
		printf("1.3\n");
	else if (str == "D0")
		printf("1.0\n");
	else if (str == "D-")
		printf("0.7\n");
	else if(str == "F")
		printf("0.0\n");
}