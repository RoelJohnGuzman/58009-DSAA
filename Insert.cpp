#include <iostream>
#include <string>
using namespace std;

int main() 
{
 int i = 11;
 int newnum, newpos;
 int size =11;
 int numbers[] = {1,2,3,4,5,6,7,8,9,10,00};
 numbers[10] = i;
 for (int i = 0; i<10; i++){
 	cout<<numbers[i] <<"\n";
 }
 	cout<< endl <<"What number do you want to add?"<<endl;
 	cin>>newnum;
 	system("cls");
 	
 for (int i = 0; i<10; i++){
 	cout<<numbers[i] <<"\n";
	 }
	cout<<endl<<"The number: "<<newnum<<endl;
	cout<<"What position?"<<endl;
	cin >>newpos;
	cout<<endl;
	
    for(i=size; i>=newpos; i--)
        numbers[i] = numbers[i-1];
    numbers[i] = newnum;
    size++;
    
     cout<<"\nThe New Array is:\n";
    for(i=0; i<size; i++)
        cout<<numbers[i]<<"  ";
    cout<<endl;
	
 return 0;
}
