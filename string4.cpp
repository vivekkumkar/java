//scan a string from user, allocate necessary amount of memory to the string. save the memory.
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char *str1;
	char *str2;
	str1=new char[100];
	cin.getline(str1,100);
	int n=strlen(str1);
	str2=new char[n];
	int i;
	 while(*(str1+i)!='\0')
	 {
	 	*(str2+i)=*(str1+i);
	 	i++;
	 }
	 *(str2+i)='\0';
	 cout<<str2;
	 delete str1;
	
}
