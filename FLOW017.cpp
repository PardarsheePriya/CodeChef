#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t){
	int a, b, c;
	cin >> a >> b >> c;
	
	int maxi = max(a, max(b, c));
	int mini = min(a, min(b, c));
	
	int totalsum = a + b +c;
	int ans = totalsum - (maxi + mini);
	
	cout << ans <<endl;
	    t--;
	}
	
	return 0;
}
