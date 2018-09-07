//Q.4.Print Rhombus star pattern.
//   ****
//  ****
// ****
//****


#include<iostream>
using namespace std;
int main(){
	cout << "Welcome to the Rhombus printer!" << endl;
	//declare variable
	int x;
	//ask for input 
	cout << "Enter the number of height units" << endl;
	cin >> x;
        //print (x-1 to 0) spaces
	for (int a=0; a<x; a++){
		for (int b=0; b<(x-a-1); b++){
			cout << " ";
		}
	//print x stars in all rows
		for (int b=0; b<x; b++){
		cout << "*";
		}
	//endl
	cout << endl;	
	}
	return 0;
}
