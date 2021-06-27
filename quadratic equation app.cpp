#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,x1,x2,realpart,imaginarypart,discriminant;
	cout<<"enter the cofficient of quardratic equation \n";
	cin>>a>>b>>c;
	discriminant=b*b-4*a*c;
	if(	discriminant>0)
	{
		cout<<"	discriminant greater than 0 \n";
		x1 = (-b+sqrt(discriminant))  /  (2*a);
		x2 = (-b-sqrt(discriminant)) / (2*a);
		cout<<"x1="<<x1<<endl;
		cout<<"x2="<<x2<<endl;
	}
	else if(	discriminant=0)
	{
		cout<<"	discriminant = to zero 0 \n";
		x1=(-b)/(2*a);
		x2=(-b)/(2*a);
		cout<<"x1="<<x1<<endl;
		cout<<"x2="<<x2<<endl;
	}
	else
	{
		cout<<"discriminant is less than 0 \n";
		realpart=-b/2*a;
		imaginarypart=sqrt(-discriminant)/2*a;
		x1=realpart+imaginarypart;
		x2=realpart-imaginarypart;
		cout<<"x1="<<x1<<endl;
		cout<<"x2="<<x2<<endl;
	} 
	return 0;
}
