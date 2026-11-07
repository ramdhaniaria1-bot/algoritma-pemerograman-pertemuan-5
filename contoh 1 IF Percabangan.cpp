//Program to print positive number entered by the user
//if the user enters a negative number, it is skiped

#include<iostream>
using namespace std;

int main() {
	int number;
	
	cout<<"Enter an interger:";
	cin>>number;
	
	//checks if the number is positive
	if(number>0){
		cout<<"You entered a positive integer:"<< number<<endl;
	}
	
	cout<<"This steatment is always executed.";
	
	return 0;
}

