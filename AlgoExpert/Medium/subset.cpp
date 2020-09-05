#pragma GCC optimize("Ofast")
#include <algorithm>
#include <bitset>
#include <deque>
#include <iostream>
#include <iterator>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

void abhisheknaiidu()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void subSets(vector<int> nums, vector<int> sub, vector<vector<int>> &res, int start) {
	res.push_back(sub);
	for(int i=start; i<nums.size(); i++) {
		sub.push_back(nums[i]);
		for(auto x: sub) {
			cout << x << " ";
		}
		cout << endl;
		subSets(nums, sub, res, i+1);
		sub.pop_back();
		for(auto x: sub) {
			cout << x << " ";
		}
		cout << endl;
	}
}


int main(int argc, char* argv[]) {
	abhisheknaiidu();
	vector<int> nums{1,2,3};
	vector <vector<int>> res;
	vector <int> sub;
	subSets(nums,sub, res, 0);

	for(auto x: res) {
		for(auto p: x) {
			cout << p << " ";
		}
		cout << endl;
	}

   return 0;
}