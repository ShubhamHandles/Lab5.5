//Q.6.Print mirror Rhombus pattern


#include<iostream>
using namespace std;
int main(){
	cout << "Welcome to the mirror Rhombus printer!" << endl;
	//declare variable
	int x;
	//ask for input 
	cout << "Enter the number of height units" << endl;
	cin >> x;
        //print (0 to x-1) spaces
	for (int a=(x-1); a<x and a>=0; a--){
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
