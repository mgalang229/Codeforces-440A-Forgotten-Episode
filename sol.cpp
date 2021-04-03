#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int temp = n - 1;
	vector<int> a(temp);
	for (int i = 0; i < temp; i++) {
		cin >> a[i];
	}
	int episode = 0;
	int index = 0;
	sort(a.begin(), a.end());
	// run a loop from 1 to 'n'
	for (int i = 1; i <= n; i++) {
		// check if every element is equal to current number of the sequence
		if (a[index] == i) {
			// the current number if equal to the current element in 'a', then increment the index
			// and continue the loop so it will skip the lines after
			index++;
			continue;
		}
		// otherwise, store the missing number in the variable
		episode = i;
	}
	cout << episode << '\n';
	return 0;
}
