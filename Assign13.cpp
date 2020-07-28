//============================================================================
// Name        : Assign13.cpp
// Author      : 21411
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void swap(float* a, float* b)
{
    float t = *a;
    *a = *b;
    *b = t;
}


int partition(float arr[], int low, int high)
{
    int p = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++)
    {

        if (arr[j] <= p)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}


void quickSort(float arr[], int low, int high)
{
    if (low < high)
    {

        int pi = partition(arr, low, high);


        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(float arr[], int m)
{
    int i;
    cout<<"Sorted percentages="<<endl;
    for (i=0; i <m; i++)
        cout<<arr[i]<<endl;
    cout<<"Top five scores="<<endl;
    for(i=m-1;i>m-6;i--)
    {
    	cout<<arr[i]<<endl;
    }
}

int main()
{int n;
float arr[50];
	cout<<"How many percentages=";
	cin>>n;
	cout<<"Enter given percentages="<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
quickSort(arr, 0,n -1);
    printArray(arr, n);
    return 0;
}
