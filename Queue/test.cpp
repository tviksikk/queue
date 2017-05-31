#include "Queue.h"
#include <iostream>

using namespace std;

int main()
{
	try
	{


		Queue <int> temp(200);

		temp.push(2);
		temp.push(0);
		temp.push(0);
		temp.push(1);
		temp.resize(15);
		cout << temp.pop(); 
		cout << " " << temp.pop(); 
		cout << " " << temp.pop() << endl;
	}
	catch (int & e)
	{
		cout << "error number: " << e << endl;
	}
	cin.get();
	return 0;
}


