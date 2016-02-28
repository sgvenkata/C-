#include "header1.h"
using namespace std;

/***********************************************************
*Name        : Sai Gajjala Venkata
*ZID         : Z1762423
*Assignment  : 1
*Due Date    : 1/25/2016
************************************************************/



int main(){

int i,k,n;
i=1;     //Intialize Values
k=0;

cin>>n;  //Prompt for input

for (int j=0;j<n;i=i+2)
{
k=k+i;
j++;

}

cout<<endl;
cout<<"N="<<n<<endl;      //Given value
cout<<"Sum:"<<k<<endl;    //Result
return 0;
}
