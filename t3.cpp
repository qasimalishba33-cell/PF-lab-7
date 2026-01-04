#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number you want loop to continue:"<<endl;
cin>>n;
int indx1 = 1;

int indx2 = n;

for(int i = 1 ; i<=n; i++){

  for(int j = 1; j<=n; j++){
  
  
  (i%2 != 0 && j >= indx1 && j <= indx2)? cout<<"*" : cout<<" ";
  
  
  }
  
  cout<<endl;
  if(i<(n/2)+1){
  
  indx2--;
  indx1++;
  }
  
  else{
  
  indx1--;
  indx2++;
  }
  }
  }
