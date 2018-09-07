//Q.8.Print the right triangle star pattern.

#include<iostream>
using namespace std;

int main(){
	cout << "Welcome to the right triangle printer!" << endl;
	//declare variable
	int x;
	//ask for input 
	cout << "Enter the number of height units" << endl;
	cin >> x;
	//print stars (1 to x)
	for(int i = x-1; i< x and i >= 0; i--){
        	for (int j =0; j < (x-i) ; j++){
            		cout << "*";
        	}
		//endl
        	cout << endl;
	}
    return 0;
}
 
