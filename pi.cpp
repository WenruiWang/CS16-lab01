#include <iostream>
#include <cmath>
using namespace std;

int main()
{
        int n;
        cout<<"Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):\n";
        cin>>n;
      
        while(n>-1) {  double sum=0;
		for(int i=1;i<n;i++){

             
		      sum=sum+pow(-1.0,i-1)/(2*(i-1)+1);
		}  sum=4*sum;
             
        cout<<"The approximate value of pi using "<< n <<" terms is :"<< sum <<endl;     
	cout<<"Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):\n";
	cin>>n;	
	} return 0;
        }

