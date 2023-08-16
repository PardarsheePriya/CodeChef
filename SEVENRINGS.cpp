#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t){
	    int n, x;
	    cin >> n >> x;
	    string total;
	    total = to_string(n*x);
	    
	    if(total.size()== 5){
	        cout << "YES" << endl;
	        
	    }
	    else{
	        cout << "NO" << endl;
	    }
	    t--;
	}
	return 0;
}
