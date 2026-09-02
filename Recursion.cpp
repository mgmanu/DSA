// #include <iostream>
// using namespace std;

// void number(int n){
//     if(n==0) return;
//     cout<<n<<" ";
//     number(n-1);

// }
// int main(){
//     number(5);
// }




// #include <iostream>
// using namespace std;

// long long factorial(int n){
//     if(n==0 || n==1) return 1;
//     long long ans = n * factorial(n-1);
//     return ans;
    

// }
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     cout<<factorial(n);
// }












// #include <iostream>
// using namespace std;

// int sum(int n){
//     if(n==0) return 0;
//     int ans = n + sum(n-1);
//     return ans;
    

// }
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     cout<<sum(n);
// }













// #include <iostream>
// using namespace std;

// void print(int n,int x){
//     if(x>n) return ;
//     cout<<x<<" ";
//     print(n,x+1);
    

// }
// int main(){
//     int n;
//     cin>>n;
//     int x = n - (n-1);
//     print(n,x);
// }


















// #include <iostream>
// using namespace std;

// int n;
// void print(int x){
//     if(x>n) return ;
//     cout<<x<<" ";
//     print(x+1);
    

// }
// int main(){
//     cin>>n;
//     print(1);
// }


















// #include <iostream>
// using namespace std;

// void number(int n){
//     if(n==0) return;
//     number(n-1);
//     cout<<n<<" ";

// }
// int main(){
//     number(5);
// }














// #include<iostream>
// using namespace std;

// void number(int n){
//     if(n==0) return;
//     cout<<n<<" ";
//     number(n-1);
//     cout<<n<<" ";

// }

// int main(){
//     number(5);
// }

















#include<iostream>
using namespace std;

void number(int n){
    if(n==0) return;
    cout<<n<<" ";
    number(n-1);
    if(n!=1)
    cout<<n<<" ";

}

int main(){
    number(5);
}
