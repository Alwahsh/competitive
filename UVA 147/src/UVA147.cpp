#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll DP[300005];
double temp;
int val;

int main() {
	memset(DP,0,sizeof DP);
	DP[5] = 1;
	DP[10] = 1;
	DP[20] = 1;
	DP[50] = 1;
	DP[100] = 1;
	DP[200] = 1;
	DP[500] = 1;
	DP[1000] = 1;
	DP[2000] = 1;
	DP[5000] = 1;
	DP[10000] = 1;
	cout << right << fixed;
	while (cin >> temp) {
		cout << setw(6) << setprecision(num) << temp;
		temp+= 0.005;
		int t = temp;
		int num = 2;
		while (t/=10)
			num++;
		cout << num << endl;
		val = temp*100.0;
		if (val == 0)
			return 0;
		cout << setw(17) << DP[val] << endl;
	}
	return 0;
}
