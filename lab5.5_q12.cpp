//Q.12.Print inverted right triangle pattern.

#include<iostream>
using namespace std;

int main(){
    cout << "Welcome to the inverted right triangle printer!" << endl;
	//declare variable
	int x;
	//ask for input 
	cout << "Enter the number of height units" << endl;
	cin >> x;
	//print stars (x to 1)
	for(int i = 0; i<x; i++){
		for (int j =0; j < (x-i) ; j++){
			cout << "*";
        	}
		//endl
        	cout << endl;
    	}
    return 0;
}
 
