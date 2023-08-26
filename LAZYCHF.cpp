#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x, m, d;
	    cin >> x >> m >> d;
	    
	    int timeTaken = m*x;
	    int maxTime = x+d;
	    int ans = min (timeTaken, maxTime);
	    cout << ans << endl;
	}
	return 0;
}
