// Linear search in an unsorted array. O(n).

// linear search in unsorted array
#include <iostream>
using namespace std;
int main() {
    int n, item, flag=0;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements:";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Enter element to search: ";
    cin>>item;
    for(int i=0; i<n; i++){
        if(arr[i]==item){
            flag=1;
            break;
        }
    }
    if(flag)
        cout<<"Element found\n";
    else
        cout<<"Element not found\n";
}