#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	int n, m, k;
	
	while(t){
	    cin >> n >> m >> k;
	    if((m-k) >= n){
	        cout << "Yes" << endl;
	    }
	    else{
	        cout << "No" << endl;
	    }
	    t--;
	}
	return 0;
}
