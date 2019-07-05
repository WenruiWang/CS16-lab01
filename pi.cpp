#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
        int n;
        cout<<"Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):\n";
        cin>>n;
      
        while(n>-1) {  double sum=0;
		for(int i=0;i<=n;i++){

             
		      sum=sum+pow(-1.0,i)/(2*i+1);
		}  sum=4*sum;
            cout<<setprecision(4); 
        cout<<"The approximate value of pi using "<< n+1 <<" terms is :"<< sum <<endl;     
	cout<<"Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):\n";
	cin>>n;	
	} return 0;
        }

