// C++ program to generate binary numbers from 1 to n
#include <bits/stdc++.h>
using namespace std;


void generatePrintBinary(int n)
{
for(int i=1;i<=n;i++){
	string str="";
	
	//in case i = 15
	
	int temp=i;
	//temp = 15
	
	while(temp)
	// temp = 15, true
	{
		
		if(temp&1)
		// 15&1 = true & 1 = 1
		
			{
				str=to_string(1)+str;
				
			}
		else
			{
				str=to_string(0)+str;
			}
			
		temp=temp>>1;
	}
	cout<<str<<endl;
}
}

// Driver code
int main()
{
	int n =27;

	// Function call
	generatePrintBinary(n);
	return 0;
}
