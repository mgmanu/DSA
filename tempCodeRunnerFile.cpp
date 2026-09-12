// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
    
//     cout<<"Enter " <<n<< " array elements: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     cout<<"Array elements are: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     int max = arr[0];
//     int min = arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>max) {
//             max=arr[i];
//         }
//     }

//     for(int i=0;i<n;i++){
//         if(arr[i]<min) {
//             min=arr[i];
//         }
//     }

//     cout<<endl;
//     cout<<"MAXIMUM ELEMENT : "<<max<<endl;
//     cout<<"MINIMUM ELEMENT : "<<min<<endl;

//     int search;
//     cout<<"Enter the element to be searched: ";
//     cin>>search;
//     int flag=0;
//     int i;
//     for(int i=0;i<n;i++){
//         if(arr[i]==search) flag=1;
//     }
//     if(flag==1) cout<<"ELEMENT FOUND AT INDEX "<<i<<endl;
//     else cout<<"ELEMENT NOT FOUND"<<endl;
    
//     i=0;
//     int j=n-1;
//     int temp;
//     while(i<j){
//         temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//         i++,j--;
//     }
//     cout<<"ARRAY IN REVERSE ORDER"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }   

// }






