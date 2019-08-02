#include<iostream>
#include<array>
using namespace std;
int main(void){
array<int,6> arr={1,2,3,4,5,6};
cout<<"size of array"<<arr.size()<<endl;
cout<<"1st element:"<<arr.front()<<endl;
cout<<"last element:"<<arr.back()<<endl;

return 0;
}
