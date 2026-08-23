// #include <iostream>
// using namespace std;

// int main(){
//     int arr[3][4]={{2,3,4,5},
//     {4,3,5,6},{2,5,3,9}};
//     int min=0;
//     for(int i=0;i<3;i++){
//         int max=arr[i][0];
//         for(int j=1;j<4;j++){
//             if(arr[i][j]>max){
//                 max=arr[i][j];
//             }
//         }   
//         if(i==0){
//             min=max;
//         }
//         else if(max<min){
//             min=max;
//         }
//     }
//     cout<<"MIN: "<<min<<endl;
// }
    




// #include <iostream>
// using namespace std;

// int main(){
//     int arr[3][4]={{2,3,4,5},
//     {4,3,5,6},{2,5,3,9}};
//     int max=0;
//     for(int j=0;j<4;j++){
//         int min=arr[0][j];
//         for(int i=0;i<3;i++){
//             if(arr[i][j]<min){
//                 min=arr[i][j];
//             }
//         }   
//         cout<<min<<endl;
//         if(j==0){
//             max=min;
//         }
//         else if(max<min){
//             max=min;
//         }
//     }
//     cout<<max;
// }















// #include<iostream>
// using namespace std;

// int main(){
//     int arr[3][4]={{2,3,4,5},
//     {4,3,5,6},{2,5,3,9}};
//     int i,j;
//     for(i=0;i<3;i++){
//     if(i%2 == 0){
//         for(j=0;j<4;j++){
//             cout<<arr[i][j]<<" ";
//         }
//     }
//     else{
//         for(j=3;j>=0;j--){
//             cout<<arr[i][j]<<" ";
//         }
//     }
// }
// }

















// #include <iostream>
// using namespace std;

// int main(){
//     int arr[3][4]={{2,3,4,5},
//     {4,3,5,6},{2,5,3,9}};

//     for(int j=0;j<4;j++){
//         for(int i=0;i<3;i++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;


//     }
// }



















// #include<iostream>
// using namespace std;

// int main(){
//     int arr[3][3]={{1,2,3},
//                     {4,5,6},
//                     {7,8,9}};
//     for(int i=0;i<3;i++){
//         for(int j=i+1;j<3;j++){
//             int temp=arr[i][j];
//             arr[i][j]=arr[j][i];
//             arr[j][i]=temp;
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"90 deg"<<endl;
//     int s=0;
//     int e=2;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             int t=arr[i][s];
//             arr[i][s]=arr[i][e];
//             arr[i][e]=t;
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }






























