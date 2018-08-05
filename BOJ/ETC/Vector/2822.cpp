#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
int main() {
	vector<pair<int, int>> v;
	int val, d[5], cnt = 0;
	for (int i = 1; i < 9; ++i) {
		cin >> val;
		v.push_back(make_pair(val, i));
	}
	sort(v.begin(), v.end());
	int sum = 0;
	for (vector<pair<int, int>>::iterator i = v.begin() + 3; i < v.end(); ++i) {
		sum += i->first;
		d[cnt++] = i->second;
	}
	printf("%d\n", sum);
	sort(d, d + cnt);
	for (int i = 0; i < cnt; ++i)
		printf("%d ", d[i]);
}