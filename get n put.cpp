#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
	char ch;
	int count;
	cout<<"write data\n";
	while(ch!='\n')
	{
		cin.get(ch);
		cout.put(ch);
		count++;
	}
}
