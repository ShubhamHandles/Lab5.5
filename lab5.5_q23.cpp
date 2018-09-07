//Q.23.Print hollow diamond star pattern.


#include<iostream>
using namespace std;
int main(){
	cout << "Welcome to the hollow diamond printer!" << endl;
	//declare variable
	int x,y;
	//ask for input 
	cout << "Enter the number of height units" << endl;
	cin >> y;
	x = y/2;
	for(int a = 0; a < x ; a++){
        	//print stars (x to 1)
        	for (int b=0; b < (x-a) ; b++){
            		cout << "*";
        	}
        	//print spaces (0 to 2a)
        	for (int b=0; b < (2*a) ; b++){
            		cout << " ";
        	}
        	//print stars (x to 1)
        	for (int b=0; b < (x-a) ; b++){
            		cout << "*";
        	}
		//endl
		cout << endl;
    	}
	for(int i=(x-1); i < x and i >= 0; i--){
        	//print stars (1 to x)
        	for (int b=0; b < (x-i) ; b++){
            		cout << "*";
        	}
        	//print spaces (2a to 0)
        	for (int b=0; b < (2*i) ; b++){
            		cout << " ";
        	}
        	//print stars (1 to x)
        	for (int b=0; b < (x-i) ; b++){
            		cout << "*";
		}
		//endl
		cout << endl;
	}
	return 0;
}
