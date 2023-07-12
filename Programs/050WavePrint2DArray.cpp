/*
Ya filhal sai nai ho raha baad ma try kroon ga INSHALLAH ...
*/

// #include<bits/stdc++.h>
// using namespace std;
// int WaveEffect(int arr[][4],int i,int j){
//     for( i=0;i<3;i++){
//         if(i%2==0){
//         for(j=0;j<4;j++){
//                 cout<<arr[i][j]<<" ";
//         }
//       }
//         else {
//             for(j=3;j>=0;j--){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int arr[3][4];
//     cout<<"Enter the numbers :"<<endl;
//     for(int j=0;j<4;j++){
//         for(int i=0;i<3;i++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     cout<<endl;
//     cout<<endl;
//     WaveEffect(arr,3,4);
// }
#include <iostream>
using namespace std;

void WaveEffect(int arr[][4], int rows, int cols) {
    for (int i = 0; i < cols; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < rows; j++) {
                cout << arr[j][i] << " ";
            }
        } else {
            for (int j = rows - 1; j >= 0; j--) {
                cout << arr[j][i] << " ";
            }
        }
         cout << endl;
    }
   
}

int main() {
    int arr[3][4];
    cout << "Enter the numbers:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }
    cout << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << endl << endl;
    WaveEffect(arr, 3, 4);

    return 0;
}
