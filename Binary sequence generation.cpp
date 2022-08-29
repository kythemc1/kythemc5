#include <bits/stdc++.h>
#define Max 21
using namespace std;
int x[Max];
int n;
void solution() {
	for(int i = 1; i <= n; i++) {
		cout << x[i];
	}
	cout << endl;
}

bool check(int k , int v) {
	if(x[k-1] == 1 && v ==1 ) return false;
	return true;
}
void Try(int k) {
	for(int v = 0; v <= 1; v++) {
		if(check(k,v)){
			x[k] = v;
			if(k == n) {
				solution();
			} else {
				Try(k+1);
			}
		}
	}
}
int main() {
	cin >> n;
	Try(1);
	return 0;
}
