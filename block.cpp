#include <iostream>
using namespace std;
int main(){
	//loop until rows and columns both not zero
	int rows,columns;
	rows=1; columns=1 ;
	while(rows>0 &&columns>0 ){
		cout<< "Enter number of rows and columns:"<<endl;
		//get rows and columns
		cin>>rows>>columns;
		//loop through each row
		for(int i=0; i<rows; i++)
		{	for(int j=0; j<columns; j++)
			{	cout<<"X.";
			}
			cout<<endl;
		}
	}	
	return 0;
}


