#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t){
	    int n, x;
	    cin >> n >> x;
	    int arr[n];
	    
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    
	    int elgible = 0;
	    
	    for(int i = 0; i < n; i++){
	        if(arr[i] >= x){
	            elgible++;
	        }
	    }
	    
	    cout << elgible << endl;
	    t--;
	}
	return 0;
}
