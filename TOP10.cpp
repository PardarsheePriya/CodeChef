#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	
	int x;
	while(n > 0){
	    cin >> x;
	    
	    if(x <= 10){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	    
	    n--;
	}
	return 0;
}
