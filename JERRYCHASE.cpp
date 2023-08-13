#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	
	int tom;
	int jerry;
	
	while(n){
	    cin >> jerry >> tom;
	    if(tom > jerry){
	        cout << "YES" <<endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	    
	    n--;
	}
	return 0;
}
