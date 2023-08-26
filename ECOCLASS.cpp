#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int supply[n];
	    int demand[n];
	    
	    for(int i = 0; i < n; i++){
	        cin >> supply[i];
	    }
	    
	    for(int i = 0; i < n; i++){
	        cin >> demand[i];
	    }
	    
	    int equiPoint = 0;
	    
	    for(int i = 0; i < n; i++){
	        if(supply[i] == demand[i]){
	            equiPoint++;
	        }
	    }
	    
	    cout << equiPoint << endl;
	}
	return 0;
}
