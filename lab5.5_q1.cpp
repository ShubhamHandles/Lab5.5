//Q.1.Print the square pattern.

#include<iostream>
using namespace std;
int main(){
	cout << "Welcome to the square printer!" << endl;
	//declare variable
	int x;
	//ask for input 
	cout << "Enter the number of side units" << endl;
	cin >> x;
	//print stars (x to x)
	for (int a=0; a<x; a++){
		for (int a=0; a<x; a++){
		cout << "*";
		}
		//endl
		cout << endl;
	}
	return 0;
}
