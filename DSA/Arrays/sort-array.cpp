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


int main(int argc, char* argv[]) {
	abhisheknaiidu();
	int x;
	cin >> x;
		while(x--) {
	    int n;
	    cin >> n;
	    vector<int> nums;
	    for(int i=0; i<n; i++) {
	        int num;
	        cin >> num;
	        nums.push_back(num);
	    }
	    sort(nums.begin(), nums.end());
	    for(auto x: nums) {
	    	cout << x << " ";
	    } 
	    cout << endl;
	}


   return 0;
}