#include<iostream>
using namespace std;
int main()
	{
	
	int n; 
	cout<<"Enter the number:"<<endl;
	cin>>n;
	
	int starStart = 1;
	int starEnd = 1;
	int characterStart = n+1;
	int characterEnd = n*2;
	 
	
	
	for (int i = 1; i <= n; i++){
	 for ( int spaces = n - i; spaces >= 1; spaces--){
	     
	    cout<<" ";
	    }
	
	 	for (int j = 1; j <= (n*2); j++){
	 	
	 	if (j >= starStart && j <= starEnd){
	 	
	 	cout<<"*" ;
	 	}
	 	
	 	
	 	else if (j >= characterStart && j <= characterEnd){
	 	
	 	cout<<"0";
	 	}
	 	
	 	else
	 	{
	 	cout<<" ";
	 	}
	 	
	 	
	 	
	 	}
	    cout<<endl;
	 	starEnd++;
	 	characterEnd--;
	 	
	 
	 }	
	
	int charstart = 1;
	int charend = 1;
	int starStart2 = n + 1;//6
	int starEnd2 = n*2; //10
	
	
	for ( int i = 1; i <= n; i++){
	  
	 
	    
	    for ( int j = 1 ; j <= n*2; j++){
	    
	    
	    if ( j >= charstart && j <= charend){
	    
	      cout<<"o";
	      }
	      
	      else if ( j >= starStart2  && j <= starEnd2){
	      
	      
	      
	        cout<<"*";
	        
	        
	        }
	        
	        else
	        {
	        
	        cout<<" ";
	           for ( int spaces = n - i; spaces >= 1; spaces--){
	     
	    cout<<" ";
	    }
	          }
	          
	          }
	          
	          charend++;
	          starEnd--;
	          cout<<endl;
	          
	          }
	          }
	          
	           
	      
	
	
	
	
	
	
	
	
	

