// #include<iostream>
// #include<vector>
// using namespace std;


// int main(){
//         int nums1[] = {1,2,3};
//         int nums2[] = {2,5,6};
//         int m=sizeof(nums1)/4,n=sizeof(nums2)/4; 
//         int ans[m+n];
//         int i=0,j=0,k=0;
//         while(i<m && j<n){
//             if(nums1[i]<nums2[j]){
//                 ans[k]=nums1[i];
//                 k++,i++;
//             }
//             else{
//                 ans[k]=nums2[j];
//                 k++,j++;
//             }
//         }
//         while(i<m){
//             ans[k++]=nums1[i++];
//         }
//         while(j<n){
//             ans[k++]=nums2[j++];
//         }
//         for(int i=0;i<m+n;i++){
//             cout<<ans[i]<<" ";
//         }
// }


















// #include<iostream>
// #include<vector>
// using namespace std;


// int main(){
//         int nums1[] = {1,2,3,4,5,7};
//         int nums2[] = {2,5,6};
//         int m=sizeof(nums1)/4,n=sizeof(nums2)/4; 
//         int ans[m+n];
//         int i=m-1,j=n-1,k=m+n-1;
//         while(i>=0 && j>=0){
//             if(nums1[i]>nums2[j]){
//                 ans[k]=nums1[i];
//                 k--,i--;
//             }
//             else{
//                 ans[k]=nums2[j];
//                 k--,j--;
//             }
//         }
//         while(i>=0){
//             ans[k--]=nums1[i--];
//         }
//         while(j>=0){
//             ans[k--]=nums2[j--];
//         }
//         for(int i=0;i<m+n;i++){
//             cout<<ans[i]<<" ";
//         }
// }






















// #include<iostream>
// #include<vector>
// #include <algorithm>
// using namespace std;


// int main(){
//         int arr[] = {1,0,2,3,5};
//         int n=sizeof(arr)/4;
//         for(int i=0;i<=n;i++){
//             bool flag=false;
//             for(int j=0;j<n;j++){ 
//             if(i==arr[j]){
//                 flag=true;
//                 break;
//             }
//         }
//         if(flag==false){
//             cout<<i;
//         }
//     } 
        
// }


































// #include<iostream>
// #include<vector>
// #include <algorithm>
// using namespace std;


// int main(){
//         int arr[] = {1,0,2,3,4};
//         int n=sizeof(arr)/4;
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){ 
//             if(arr[i]>arr[j]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         if(i!=arr[i]){
//             cout<<i;
//         }
//     } 
//     cout<<n;
        
// }

















// #include<iostream>
// using namespace std;


// int main(){
//         int arr[] = {9,6,4,2,3,5,7,0,1};
//         int n=sizeof(arr)/4; 
//         int sum=0;
//         for(int i=0;i<=n;i++){
//             sum+=i;
//         }
//         int arrsum=0;
//         for(int i=0;i<n;i++){
//             arrsum+=arr[i];
//         }
//         int missele = sum-arrsum;

//         cout<<missele;
// }





























// #include<iostream>
// using namespace std;


// int main(){
//         int arr[] = {9,6,4,2,3,5,7,0,1};
//         int n=sizeof(arr)/4; 
//         bool ans[n+1]={};
//         for(int i=0;i<=n;i++){
//             for(int j=0;j<n;j++){
//             if(i==arr[j]){ 
//             ans[i]=true;
//             }
//         }
//     }
//         for(int i=0;i<n+1;i++){
//             if(ans[i]==false){
//                 cout<<i<<endl;
//             }
//         }
//     }






















// #include <iostream>

// using namespace std;

// int main(){

//     int arr[] = {9,6,4,2,3,5,7,0,1};

//     int n = sizeof(arr) / sizeof(arr[0]);

//     bool ans[n+1] = {};

//     for(int i=0; i<n; i++){
//         ans[arr[i]] = true;
//     }

//     for(int i=0; i<=n; i++){
//         if(ans[i] == false){
//             cout << i << endl;
//         }
//     }
// }














// #include<iostream>
// using namespace std;


// int main(){
//     int arr[3][3]={{2,3,4},
//                     {5,6,7},
//                     {8,9,0}};
    

//     for(int i=0;i<3;i++){
//         for(int j=0;j<i;j++){
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
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){

//         }
//     }

// }



















// #include <iostream>
// using namespace std;

// int main() {
//     int numRows=5;

//     int ans[100][100];

//     // Create all elements as 1
//     for (int i = 0; i < numRows; i++) {
//         for (int j = 0; j <= i; j++) {
//             ans[i][j] = 1;
//         }
//     }

//     // Fill the Pascal's Triangle
//     for (int i = 0; i < numRows; i++) {
//         for (int j = 0; j <= i; j++) {
//             if (j != 0 && j != i) {
//                 ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
//             }
//         }
//     }

//     // Print
//     for (int i = 0; i < numRows; i++) {
//         for (int j = 0; j <= i; j++) {
//             cout << ans[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }





















// #include<iostream>
// using namespace std;

// int main(){

//     int a[2][3]={{1,2,3},{4,5,6}};
//     int b[3][4]={{7,8,9,10},{11,12,13,14},{15,16,17,18}};
//     int res[2][4];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<4;j++){
//             res[i][j]=0;
//             for(int k=0;k<3;k++){
//                 res[i][j]+=a[i][k]*b[k][j];
//             }
//         }
//     }
//     for(int i=0;i<2;i++){
//         for(int j=0;j<4;j++){
//             cout<<res[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

























// #include<iostream>
// using namespace std;

// int main(){

//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    
//     int sum=0;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(i==j){
//                 sum+=arr[i][j];
//             }
//         }
//     }
//     cout<<"SUM = "<<sum;
// } 






















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





















// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     int fact=1;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         fact*=i;
//     }
//     cout<<"FACTORIAL OF "<<n<<" is "<<fact<<endl;

// }

















// #include<iostream>
// using namespace std;


// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     int choice;
//     cout<<"Enter Choice: ";
//     cout<<endl;
//     cout<<"1.ADD"<<endl;
//     cout<<"2.SUB"<<endl;
//     cout<<"3.MUL"<<endl;
//     cout<<"4.DIV"<<endl;
//     cout<<"5.MOD"<<endl;

//     cin>>choice;

//     switch(choice){
//         case 1:
//         cout<<a+b<<endl;
//         break;

//         case 2:
//         cout<<a-b<<endl;
//         break;

//         case 3:
//         cout<<a*b<<endl;
//         break;

//         case 4:
//         cout<<a/b<<endl;
//         break;
        
//         case 5:
//         cout<<a%b<<endl;
//         break;

//         default:
//         cout<<"Invalid Choice"<<endl;
//     }

// }
