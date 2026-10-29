// Smallest and largest element of an array in one pass.

// finding the smallest and largest argument
#include <iostream>
using namespace std;
int main() {
    int n, r, smallest, largest;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements:";
    for(int i=0; i<n; i++)
    cin>>arr[i];
    smallest=arr[0];
    largest=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<smallest)
            smallest=arr[i];
        if(arr[i]>largest)
            largest=arr[i];
    }
    cout<<"Smallest element: "<<smallest<<"\n";
    cout<<"Largest element: "<<largest<<"\n";
}