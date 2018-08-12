#include <iostream>
using namespace std;

int t, *n, r;

int main() {
	cin >> t;
	n = new int[t];
	for (int i = 0; i < t; i++) cin >> n[i];
	for (int i = 0; i < t; i++) {
		if (n[i - 1] >= n[i]) {
			r += n[i - 1] - n[i] + 1;
			n[i - 1] -= n[i-1] - n[i] + 1;
			for (int j = i - 2; j >= 0; j--) {
				if (n[j] >= n[j+1]) {
					r += n[j] - n[j+1] + 1;
					n[j] -= n[j] - n[j+1] + 1;
				} else break;
			}
		}
	}
	cout << r;
	return 0;
}

/*
#include<cstdio>
int n,a[100],r;
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", a+i);
	for (int i = n-1; i; i--) if (a[i-1] >= a[i]) r+=a[i-1]-a[i]+1,a[i-1] = a[i] - 1;
	printf("%d", r);
	return 0;
}
*/