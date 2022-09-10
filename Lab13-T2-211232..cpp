#include <iostream>
using namespace std;
float kgtogram(float *a);
int main()
{
	float gram,kg; //declaring variables
	cout<<"Enter your values in kilograms: ";
	cin>>kg; //taking variable
	gram=kgtogram(&kg); //sending the address of the variable
	cout<<"Value in grams: "<<gram<<" grams";
	
	return 0;
}
float kgtogram(float* a) //have a pointer variable in the function
{
	float b;
	b=*a*1000; //multiplying by 1000 and sending back
	return b;
}
