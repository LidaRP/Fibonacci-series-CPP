#include <iostream>
using namespace std;

int main()
        {
        	int a=0;
        	int b=1;
        	cout<<b<<endl;
        	for(int i=1;i<10;i++)
        	   {
        	   	cout<<a+b<<endl;
				   int c=a+b;
        	   	   a=b;
        	   	   b=c;
			   }
        	
        	
return 0;
        }
