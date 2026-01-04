#include<iostream>
using namespace std;
int main(){

 	int n;
 	cout<<"Enter any odd number from user:";
 	cin>>n;
 	
 	if((n % 2 ) != 0){
 	cout<<"pattern will print"<<endl;
 	}
 	
 	else 
 	{
 	cout<<"Invalid number";
 	}
 	
 	for(int i = 0; i<n; i++){
 	
 		for(int j = 0; j<n; j++){
 		
 		if( i ==  0 || i == n-1 || j == 0 || j == n-1){
 		
 		cout<<"0";
 		}
 		
 		else if ( i == j &&  i != 0  && j !=0  && i != n-1 && j != n-1){
 		
 		cout<<"*";
 		}
 		
 		else if (i + j == n-1  &&  j != 0 && i != 0 && i != n-1 && j != n-1 && i + j != (n-1)/2){
 		
 		cout<<"^";
 		}
 		
 		else 
 		{
 		cout<<" " ;
 		}
 		
 		}
 		
 		cout<<endl;
 		
 		}
 		}
