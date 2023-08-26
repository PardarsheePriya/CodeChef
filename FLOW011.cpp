#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    double baseSalary;
	    cin >> baseSalary;
	    
	    double hra;
	    double da;
	    
	    if(baseSalary < 1500){
	        hra = (baseSalary*10)/100;
	        da = (baseSalary*90)/100;
	    }
	    else{
	        hra = 500;
	        da = (baseSalary*98)/100;
	    }
	    
	    double grossSalary = baseSalary+hra+da;
	    cout<< fixed << setprecision(2) << grossSalary << endl;
	}
	return 0;
}
