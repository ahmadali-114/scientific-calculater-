#include<iostream>
#include<cmath>
using namespace std;
int addition(int n1, int n2)
{
	int sum;
	sum=n1 + n2;
	return sum;
}
int sub(int n1, int n2)
{
	int sub;
	sub=n1 - n2;
	return sub;
}
int mul(int n1, int n2)
{
	int mul;
	mul=n1 * n2;
	return mul;
}
float div(float n1, float n2)
{
	float div;
	div=n1 / n2;
	return div;
}

int sqrt(int n1, int n2)
{
	int sqrt;
	sqrt=n1*n1;
	return sqrt;
}
int sqrt1(int n1, int n2)
{
	int sqrt1;
	sqrt1=n2*n2;
	return sqrt1;
}

float rem(int n1, int n2)
{
	float rem;
	rem=n1 % n2;
	return rem;
}
int log(int n1, int n2)
{
	return (n1,n2);
}

int main()
{
	int n1,n2,res1,res2,res3,res5,res6;
	float res4,res7;
	double res8,res9;
	cout<<"Enter 1st number :";
	cin>>n1;
	cout<<"Enter 2nd number :";
	cin>>n2;
	res1=addition(n1,n2);
	res2=sub(n1,n2);
	res3=mul(n1,n2);
	res4=div(n1,n2);
	res5=sqrt(n1,n2);
	res6=sqrt1(n1,n2);
	res7=rem(n1,n2);
	res8=log(n1);
	res9=log(n2);
	cout<<"--------------------------------"<<endl;
	cout<<"Sum of Two Number ["<<n1<<" + "<<n2<<"]="<<res1<<endl;
	cout<<"Substraction  of Two Number ["<<n1<<" - "<<n2<<"]="<<res2<<endl;
	cout<<"Multiplication  of Two Number ["<<n1<<" * "<<n2<<"]="<<res3<<endl;
    cout<<"Division  of Two Number ["<<n1<<" / "<<n2<<"]="<<res4<<endl;
    cout<<"Reminder  of Number ["<<n1<<" % "<<n2<<"]="<<res7<<endl;
    cout<<"Square  of 1st Number ="<<res5<<endl;
    cout<<"Square  of 2nd Number ="<<res6<<endl;
    cout<<"Log  of 1st Number ="<<res8<<endl;
    cout<<"Log  of 2nd Number ="<<res9<<endl;
	return 0;	
}
