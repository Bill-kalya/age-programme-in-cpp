#include<iostream>
using namespace std;

int main()
{
	int age;
    
    cout<<"enter your age:";
    cin>>age;
    
    if(age>=1&&age<<5)
    {
    	cout<<"an infant";
	}
	else if(age>=6&&age<=12)
	{
		cout<<"a child";
	}
	else if(age>=13&&age<=18)
	{
		cout<<"a teenager";
	}
	else if(age>=19&&age<=28)
	{
		cout<<"a youth";
	}
	else if(age>=29&&age<=44)
	{
		cout<<"a middle age";
	}
	else if(age>=45&&age<=65)
	{
		cout<<"an elderly";
	}
	else if(age>=66)
	{
		cout<<"pension rights";
	}
	else
	{
		cout<<"invalid entry";
	}
}
