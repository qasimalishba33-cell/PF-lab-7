#include<iostream>
using namespace std;
int main(){

int n ;
cout<<"Enter any odd number:"<<endl;
cin>>n;

if (n%2 != 0){

        cout<<"Pattern will update:"<<endl;
        }
        
        else{
        
        cout<<"Invalid Number entered";
        }
int i = 1;

int row = 1;
int col = 1;

while ( i<=n*n){

	if( row == 1 || row == n || col == 1 || col == n){
	
	cout<<"0";
	
	}
	 
	 
	 else if(row == col && row != 1 && col != 1 && row != n && col != n)
	 {
	 
	 cout<<"*";
	 }
	 
	 else if(row + col == n+1 && row != 1 && col != 1 && row != n && col != n && row != (n+1)/2 && col != (n+1)/2)
	 {
	    cout<<"^";
	    }
	 
	 else
	 {
	 cout<<" ";
	 }
	 
	 
	 
	 if(i%n == 0){
	 
	 
	 cout<<endl;
	 
	 row++;
	 col=0;
	 }
	 
	 col++;
	 i++;
	 }
	 }

	
