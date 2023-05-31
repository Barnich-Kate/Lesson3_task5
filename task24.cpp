#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;



int main() {
	int m, n;
	m = 2;
	n = 2;
	int arr [m] [n] = {{2,3},{4,5}};
	int max = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][0] > max) {
				max = arr[j];
			}
			cout << max;
		}
	}

	}
		
