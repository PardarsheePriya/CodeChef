#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t){
	    
	    int n, x, p;
	    cin >> n >> x >>p;
	    
	    int rightMarks = x*3;
	    int wrongMarks = (n-x)*1;
	    
	    int total = rightMarks - wrongMarks;
	    if(total >= p){
	        cout << "PASS" << endl;
	    }
	    else{
	        cout << "FAIL" << endl;
	    }
	    t--;
	}
	return 0;
}
