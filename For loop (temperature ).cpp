#include <iostream>
using namespace std;
int main(){
	float temp,average,sum=0;
for (int d=1;  d<=7; d++ )
   { cout<<"Note today's Temperature: "<<endl;
    cin>>temp;
     sum+=temp;
   }
   average=sum/7;
     cout<<"the average temperature of week is: "<<average<<endl;
     return 0;