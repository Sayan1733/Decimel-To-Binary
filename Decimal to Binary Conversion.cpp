#include <iostream>
#include <conio.h>

//Decimel To Binary Conversion 

using namespace std;

int conversion(int n)
{
	int a[60],i=0;
		
	while(n>0)										//storing the binary digit in array
	{
		a[i]=n%2;
		n=n/2;
		i++;
	}
	cout<<"The Conversion of decimel number to binary is:";
	for(i=i-1;i>=0;i--)										//It is actually use for reverse the number
	{
		cout<<a[i];
	}
	return 0;
}
int main()
{
	int n;
	cout<<"Enter The Decimel Number:";
	cin>>n;
	
	conversion(n);											//calling the function
	
	getch();
	return 0;
}
