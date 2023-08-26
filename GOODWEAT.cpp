#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int week[7];
	    for(int i = 0; i < 7; i++){
	        cin >> week[i];
	        
	    }
	    
	    int sunnyDay = 0;
	    int rainyDay = 0;
	    
	    for(int i = 0; i < 7; i++){
	        if(week[i] == 0){
	            rainyDay++;
	        }
	        else{
	            sunnyDay++;
	        }
	    }
	    
	    if(rainyDay < sunnyDay){
	        cout << "Yes" << endl;
	    }
	    else{
	        cout << "No" << endl;
	    }
	}
	return 0;
}
