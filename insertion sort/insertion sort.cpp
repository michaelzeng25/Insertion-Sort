// insertion sort.cpp : Defines the entry point for the console application.

#include <iostream>
using namespace std;
#include "stdafx.h"
#include <vector>
//e.g: 10 18 23 25 30 23 17 45 35
#include <time.h>
int arraysize;
int location;
int temp;
int firstout;
int elements;


int main()
{
	vector <int> array;
	cout << "Enter the size of the array--"; cin >> arraysize;
	srand(time(0));
	array.resize(arraysize);//determine the size of the numbers you wish to sort

	cout << "Enter the elements you wish to sort." << endl;
	for (int elements = 0; elements < arraysize; elements++)
		cin >> array[rand()];//ask you to enter the list of the numbers you wish to sort
	

	for (int firstout = 1; firstout < arraysize; firstout++)
	{
		if (array[firstout] < array[firstout - 1])//the firstout is lessthan the number on its left.   574
		{
			temp = array[firstout];//copy the first out of order number                                574 temp=4
			location = firstout;//without this, after entering the elements, nothing happen             locatin=[2]
			do
			{
				array[location] = array[location - 1]; //                                                [2]=[2-1]=4=7=577 temp=4
				location--;//location will -1 each time.												location=2-1=1,
																						

					
			}				
			while (location > 0 && array[location - 1] > temp);
				array[location] = temp;//	//[1]become 4==547   then repeat
			
		}
	}
	cout << "The numbers from the smallest to the largest is:" <<endl;
	for (int order = 0; order < arraysize; order++)
		cout << array[order] << " ";


	system("pause");
}


