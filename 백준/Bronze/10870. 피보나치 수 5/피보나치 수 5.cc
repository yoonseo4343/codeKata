#include<iostream>

using namespace std;

int main()
{
	int n, n0 = 0, n1 = 1;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		int temp = n0;
		n0 = n1;
		n1 = temp + n0;
	}
	if (n == 0) {
		cout << 0;
	}
	else
		cout << n1;
	return 0;
}