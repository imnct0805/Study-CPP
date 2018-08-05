#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
int main(){
	vector<pair<int, int>> v;
	int val;
	for (int i = 1; i < 10; ++i) {
		cin >> val;
		v.push_back(make_pair(val, i));
	}
	sort(v.begin(), v.end());
	printf("%d\n%d\n", (v.end() - 1)->first, (v.end() - 1)->second);
}