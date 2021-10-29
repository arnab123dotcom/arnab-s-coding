#include <iostream>
using namespace std;

int main(){
    cout<<"Enter the number of rows and columns: ";
    int r,c,i,j;
    cin>>r>>c;
    int arr[r][c];
    cout<<"The elements along the row: ";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        cin>>arr[i][j];
        cout<<endl;
    }
    cout<<"The matrix is: "<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}