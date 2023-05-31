#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;



int main() {
	int m, n, res, s, res2;
	m = 2;
	n = 2;
	int arr [m] [n];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "Type numbers: ";
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		s = 1;
		for (int j = 0; j < m; j++) {
			s*=arr[j][i];
			if(res > s){
			res2 = i + 1;
			res = s;	
			}
		}
	}
	
	cout << res2 << ' ' << res << endl;
	}
    
