//returning a value from a function
#include <iostream>

using namespace std;

//function prototype
int sum(int, int);

int main(){
	int value1 = 20,
		value2 = 40,
		total;
		
	//call the sum function, passing the contents of
	//value1 and value2 as arguments. assign the return
	//value to the total variable
	total = sum(value1, value2);
	
	//display the sum of the values
	cout << "The sum of " << value1 << " and "
		 << value2 << " is " << total << endl;
		 
	return 0;
}

//*******************************
//definition of function sum. 
//returns the sum of its two parameters
//*******************************

int sum(int num1, int num2){
	return (num1 + num2);
}
