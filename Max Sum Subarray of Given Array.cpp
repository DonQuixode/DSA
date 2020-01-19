#include <iostream>
#include <string>
#define V 4
using namespace std;
int main()
{
 int array[V][V]={{1,2,3,4},{4,5,6,7},{7,8,9,10},{10,11,12,13}};
 int PSR[V][V];
 int sum=0;
 for(int i=0;i<V;i++){
     for(int j=0;j<V;j++){
         if(j==0)
         PSR[i][j]=array[i][j];
         else
         PSR[i][j]=PSR[i][j-1]+array[i][j];
     }
 }

 for(int i=0;i<V;i++){
     for(int j=0;j<V;j++){
         cout<<PSR[i][j]<<"\t";
     }cout<<"\n";
  }

int K;
cin>>K;
 int R=0;
 int C=0;
 //write code for one slide at first
 while(R<V){
 for(int j=C;j<V;j++){
     int temp=0;
     for(int i=R;i<R+K;i++){

         if(j==K-1)
         temp=temp+PSR[i][j];
         else
        temp=temp+PSR[i][j]-PSR[i][j-K];
        if(sum<temp)
        sum=temp;
     }
 }
 R++;
 C=K-1;
 }
 cout<<sum;
}
