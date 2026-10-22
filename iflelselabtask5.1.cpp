#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n1,n2;
	cout << "Enter the first number";
	cin >>n1;
	cout <<"Enter the second number";
	cin >>n2;
	if (n1>n2)
	{
		cout <<"First number is greater";
	}
	else if (n2>n1)
	{
		cout <<"Second number is greater";
	}
	else
	{
		cout <<"Both numbers are equal";
	}
	return 0;
}
