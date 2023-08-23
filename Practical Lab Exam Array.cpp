#include<iostream>
using namespace std;
int main()
{
           int arr[6]={26,49,98,87,62,75};
    int i,oddSum=0,evenSum=0;
    for(i=0; i<6; i++){
        if(arr[i]%2!=0){
        oddSum=oddSum+arr[i];
        }

    }
    cout<<"The sum of odd numbers are:"<<oddSum;
    return 0;
}
