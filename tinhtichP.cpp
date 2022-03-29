#include<iostream>
using namespace std;
int main()
{
	int n;
	long P=1;
	cout<<"\n Nhap n:";
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		P=P*2*i;
	        cout<<i<<"\t";
	}
	        
	
	cout<<"\n ket qua cua phuong trinh P la:" <<P<<endl;
	return 0;
}
