#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int number;
	cout <<"Enter the Number=" <<endl;
	cin >>number;
	if (number/2 ==0)
	{
		cout << "Your Number is even" << endl;
	}
	else
	{
		cout << "Your Number is odd" << endl;
	}
	return 0;
}

