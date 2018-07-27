#include <iostream>
using namespace std;

int no_of_ways(int arr[],int coins,int kitnepaise,int kahase) //coins=size of array
{ if(paise<0) return 0;
	if(paise==0) return 1;

	int sum=0;


for (int i = kahase; i < coins; i++)
{
	sum=no_of_ways(arr,coins,kitnepaise-arr[i],i)

}
return sum;

}



int main()
{ 





}


