#include <iostream>
using namespace std;
int main()
{
    cout<<"\nEnter the number of rows and columns: ";
    int row,col,i,j;
    cin>>row>>col;
    int arr[row][col];
    cout<<"\n Enter the elements along the row:";
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
        cin>>arr[i][j];
    }
    cout<<"The matrix is: "<<endl;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
