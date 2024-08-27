#include<iostream>
#include<ctime>
#include <cstdlib>
using namespace std;
int main()
{
	int a;
	cout<<"ENTER A NUMBER :";cin>>a;
	srand(time(NULL));
	int sum;
	sum=rand()%10;
	if(sum==a)
	cout<<"YEAH YOU ARE RIGHT!!";
	else{
	cout<<"TRY AGAIN!!\n";
	int l;
	cout<<"DO YOU WANT TO CONTINUE??";
	cout<<"\nYES----1\nNO----0\n";
	cin>>l;
	if(l==1)
	main();
	return 0;
	}
}
