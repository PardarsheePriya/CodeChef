#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t){
	    int n;
	    cin >> n;
	    int arr[n];
	    
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    
	    int ct = 0;
	    
	    for(int i = 0; i < n; i++){
	        if(arr[i] >= 10 && arr[i] <= 60){
	           ct++;
	        }
	    }
	    
	    cout << ct << endl;
	    t--;
	}
	return 0;
}
