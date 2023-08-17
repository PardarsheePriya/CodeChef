#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t){
	    
	    int x1, x2, y1, y2;
	    cin >> x1 >> x2 >> y1 >> y2;
	    int x = abs(x1-y1);
	    int y = abs(x2-y2);
	    int ans = max(x, y);
	    cout << ans << endl;
	    t--;
	}
	return 0;
}
