//Q.2.Print the hollow square pattern.
//****
//*  *
//*  *
//****

#include<iostream>
using namespace std;
int main(){
	cout << "Welcome to the hollow square printer!" << endl;
	//declare variable
	int x;
	//ask for input 
	cout << "Enter the number of side units" << endl;
	cin >> x;
	for (int a=0; a<x; a++){
		//all stars in a=0 and a=x-1
		if (a==0 or a==(x-1)){//print x stars in row
			for (int a=0; a<x; a++)
				cout << "*";
		}
		//rest print star space star
		else{
			//print star
			cout << "*";
			//print x-2 spaces
			for (int b=0; b<(x-2); b++){
				cout << " ";
			}
			//print star
			cout << "*";
		}
		//endl
		cout << endl;
	}
	return 0;
}
