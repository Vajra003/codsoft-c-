
#include <iostream>
using namespace std;


int main()
{   
	char op;
	float num1, num2;




    cout<<"Enter 2 numbers ";	
	cin >> num1 >> num2;

	cout<<"Enter operation for calculator \n + for addition \n - for subtraction \n / for division \n *for multiplication";
	cin >> op;
	switch (op) {

	case '+':
		cout << num1 + num2;
		break;

	case '-':
		cout << num1 - num2;
		break;


	case '*':
		cout << num1 * num2;
		break;


	case '/':
		cout << num1 / num2;
		break;

	default:
		cout << "Error! operator is not correct";
	}


	return 0;
}
