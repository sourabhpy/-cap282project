// A program to delete an element from an array. Even if it exists multiple times, remove it completely.
// Author : sourabh.py
// Build Date : Jan 23, 2020 | 11:53 PM

#include<iostream>
using namespace std;

int main(){
	int size, i, j, element, count=0, flag=0;
	cout << "Enter the size of the array : " << endl;
	cin >> size;
	int a[size];
	cout << "Now enter the array elements : " << endl;
	for (i=0; i<size; i++){
		cin >> a[i];
	}
	cout << "The entered array is : " << endl;
	for (i=0; i<size; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "Now enter the element you want to delete from the array : " << endl;
	cin >> element;
	for (i=0; i<size; i++){
		if (element == a[i]){
			flag=1;
			count++;
			cout << "The element is at position " << i << "." << endl;
		}
	}
	for (i=0; i<size; i++){
		if (element == a[i]){
			for (j=i; j<size; j++){
				a[j] = a[j+1];
			}
		}
	}
	size = size - count;
	if (flag == 1)
		cout << "The total occurences of this element were " << count << "." << endl;
	else if (flag == 0)
		cout << "There was only 1 occurence of this element." << endl;
	else
	    cout << "Unknown error occured. Please check your code and try again later." << endl;
	cout << "The array has been updated." << endl << "The new array is : " << endl;
	for (i=0; i<size; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "Process exited with a return value 0. Press any key to continue . . . " << endl;
	return 0;
}
