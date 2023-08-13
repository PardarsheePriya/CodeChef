#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int batPer;
	
	while(n){
	    cin >> batPer;
	    if(batPer >= 80){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	    
	    n--;
	}
	return 0;
}
