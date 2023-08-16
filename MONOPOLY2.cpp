#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t){
	    int p, q, r, s;
	    cin >> p >> q >> r >> s;
	    int total = p+q+r+s;
	    
	    if((total-p < p) || (total - q < q) || (total -r < r) || (total - s < s)){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	    t--;
	}
	return 0;
}
