// Write a program to delete an element from an array. Even if it exists multiple times, remove it completely.

#include<iostream>
using namespace std;

int main(){
    int sizeofarray, i, j, number, position, countofelements=0;
    cout << "Enter the size of the array : " << endl;
    cin >> sizeofarray;
    int a[sizeofarray];
    cout << "Now enter the array elements : " << endl;
    for (i=0; i<sizeofarray; i++){
        cin >> a[i];
    }
    cout << "The entered array is : " << endl;
    for (i=0; i<sizeofarray; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Now enter the number you want to completely delete from the array." << endl;
    cin >> number;
    for (i=0; i<sizeofarray; i++){
        if(number == a[i]){
            countofelements++;
            cout << "The number exists at position " << i << "." << endl;
        }
    }
    for (i=0; i<sizeofarray; i++){
        if(number == a[i]){
            position = i;
            for (i=position; i<sizeofarray; i++){
                a[i] = a[i+1];
            }
        }
    }
    sizeofarray = sizeofarray - countofelements;
    cout << "The total occurrences of the entered element were " << countofelements << "." << endl;
    cout << "The element has been deleted from the array. The new array is : " << endl;
    for (i=0; i<sizeofarray; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Done." << endl;
    return 0;
}
