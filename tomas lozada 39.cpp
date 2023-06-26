#include <iostream>
using namespace std;

int CalcularMax (int a,int b,int c);

int main()
{
	int n1,n2,n3;
	cout<<"ingrese el n1: "<<endl;
	cin>>n1;
	cout<<"ingrese el n2: "<<endl;
	cin>>n2;
	cout<<"ingrese el n3: "<<endl;
	cin>>n3;
	
	
	cout<<CalcularMax(n1,n2,n3);
	

	
	return 0;
}

int CalcularMax (int a,int b,int c){
		int max;
		if (a>b && b>c){
		
	max=a;
	}
		if (b>a && b>c){
		max=b;
			}		
		 if (c>a && c>b){
		 	max=c;
		 }   	
			
return max;
					
	}
