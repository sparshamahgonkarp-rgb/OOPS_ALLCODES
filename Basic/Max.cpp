// Max

#include<iostream>
using namespace std;
int main()
{
 int arr[5];
 cout<<"enter array element:"<<endl;
 for(int i=0;i<5;i++)
 {

 cin>> arr[i];

 }
 int max1=arr[0];
 for(int i=0;i<5;i++)
 {
 if(arr[i]>max1)
 {max1=arr[i];}

 }
cout<<"Maximum array element:"<<max1<<endl;
return 0;
}
