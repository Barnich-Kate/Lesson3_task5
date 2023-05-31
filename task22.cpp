#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;



int main() {
	int m, n;
	m = 3;
	n = 4;
	int arr [m] [n];
	int sum = 0;
	for (int j = 2; j <= m; j=j+2) {
		for (int i = 1; i <= n; i++) {
		cout << "Enter some numbers: ";
		cin >> arr[j][i];
		sum = sum + arr [j][i];
		cout << arr[i][j]<<endl;
		}	
	}
			
}
