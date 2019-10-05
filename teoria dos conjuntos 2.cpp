#include<iostream>
using namespace std;
int A[5]={2,6,5,7,15};
int B[8]={2,3,6,9,5,7,12,15};

int main(){
	
	int k=A[0];
	int i=0;
	int j=0;
   
   cout<<"k=>";
   cin>>k;
   
   			 for(i=0;i<8;i++)
    
      				if(k==A[i]) 
      				{
					 
					  j=1;     
    				}
    					
    				
						if(j==1)
						{
							cout<<"o elemento pertence a A "<<j<<endl;
						}
						else 
                          {
                          	cout<<"Nao pertence a A";
						  }
						
    
        					 
    							   system("pause"); 
}
    
