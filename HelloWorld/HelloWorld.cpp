#include <iostream>
using namespace std;


// https://github.com/byeongsuLEE/cpulscode.git
int add(int a[], int size)
{
	int sum = 0;
	for (int i = 0; i <= size; i++)
	{
		sum += i;
	}
	return sum;
}


int main()
{

	
	int p[] = { 1,2,3,4,5,6 };
	int* a = p;
	cout << a[1];
	
	
}
