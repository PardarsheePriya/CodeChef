#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t){
	    
	    int x, y;
	    cin >> x >> y;
	    
	    int a = x/y;
	    int b = x%y;
	    
	    int ans = a+b;
	    cout << ans << endl;
	    
	    t--;
	}
	return 0;
}
