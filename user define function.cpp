#include<iostream>
using namespace std;
int calAm(int,int);
int total=0;
int main()
{
	int money,years,i=1;
	cout<<"Khoayai Bank Information System **Interest = 3%**\n";
	do{	
		cout<<"\nInput Amount "<<i<<" : ";
		cin>>money;
		cout<<"Input Year "<<i<<" : ";
		cin>>years;
		cout<<"Total your money "<<i<<" : "<<calAm(money,years)<<endl;
		total+=calAm(money,years);
		cout<<"\n**************************\n";
		i++;
	}while(i<=3);
	cout<<"Total "<<i-1<<" people = "<<total<<endl;
	return(0);
}
int calAm(int money,int years)
{
	return (money*0.01*3*years+money);
}