#include <bits/stdc++.h>
using namespace std;
int DP[500];
int n;
int dp (int i){
	if(i > n) return DP[n];
	DP[i] = DP[i-1]+DP[i-2];
	dp(i+1);
}
int main()
{
	memset(DP, -1, sizeof DP);
	DP[0] = 0;
	DP[1] = 1;
	cin >> n;
	if(n == 0 || n == 1){
		cout << DP[n];
	}else{
		dp(2);
		cout << DP[n];
	}

	return 0;
}
