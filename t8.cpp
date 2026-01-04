#include<iostream>
#include<cmath> //for abs()
using namespace std;
int main(){

 int n;
 
 	cout<<"Enter the odd number:"<<endl;
 	cin>>n;
 	
 	if ( n % 2 != 0 ){
 	cout<<"Pattern will print"<<endl;
 	
 	}
 	
 	else {
 	
 	cout<<"Please enter valid number:"<<endl;

 	
 	}
 	
 	
 	
 int center = n + 1;
 	for (int i = 1; i <= (n*2)-1; i++){
 	
 		for (int j = 1; j <= (n*2)-1 ; j++){
 		
 		int distance = (abs(i-center) > abs(j-center))? (i-center) : (j-center);
 		//Manhatthan Formula to calculate distance
 		cout<<distance<<" ";
 		 
 		 }
 		 
 		 cout<<endl;
 		 }
 		 return 0;
 		 }
 		 
 	
