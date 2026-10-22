#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int age;
	cout << "Enter your age please:"<< endl;
	cin >>age;
	if (age>=18)
	{
	   cout << "You are eligible to vote:"<< endl;
	}
	else 
	{
		 cout << "You are not eligible to vote:"<< endl;
	}
	return 0;
}
