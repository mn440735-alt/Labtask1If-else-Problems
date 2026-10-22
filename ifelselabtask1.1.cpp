#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout <<"Enter your Makrs Please";
	int marks;
	cin >> marks;
	if(marks>=50)
	{
		cout <<"Congrats Your are pass" <<endl;
		}
	else
	{
		cout << "you are Fail"<< endl;
		}	
	return 0;
}
