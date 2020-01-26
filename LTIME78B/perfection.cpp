#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T , n;
    scanf("%d", &T);
    while (T--) {
	scanf("%d", &n);
	int res = 0;
	vector <int> S;
	for (int j = 0 ; j < n ; j++){
	    int x;
	    scanf("%d", &x);
	    while (!S.empty() && S.back() > x) {
	        res++;
	        S.pop_back();
	    }
	    if (!S.empty() && S.back() == x) continue;
	    S.push_back(x);
	}
	res += S.size();
	printf("%d\n", --res);
    }