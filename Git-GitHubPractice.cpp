#include<iostream>
#include<string>
using namespace std;



//function 1
void Function1() {
	cout << "Hello I am Using Git";
}
//function2
int sumOfTowNumbers(int num1,int num2) {
	return num1 + num2;
	
}
int MultiplictionOfTwoNumbers() {
	int num1;
	int num2;
	return num1 * num2;
}
string myNmae() {
	cout << "Fatima Bawzir";
}
int main() {
	function1();
	cout << sumOfTowNumbers(10,20);
	cout << MultiplictionOfTwoNumbers(4, 5);
	cout << myNmae();

}