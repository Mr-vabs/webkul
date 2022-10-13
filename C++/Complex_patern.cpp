#include <iostream>
using namespace std;
int main(){
    
    int a;
    cout<<"Enter any Number:"
    cin>>a;
    int i=1;

     
    while(i<= a){

        
         int j=i;
         int k=1;
      
        while (j<=a)
        { 
          
           cout<<k<<" ";
           j++;
           k++; 
        }
      
        
      
       //star
       int s=(i-1)*2;
       while (s)
       {
        cout<<"*"<<" ";
    s=s-1;
       }
       int b=a;
      
  while (b>=i)
        { 
          
           cout<<b-i+1<<" ";
          
           b--; 
        }

        i++;
  
  cout<<endl;

    }
    return 0;
}
