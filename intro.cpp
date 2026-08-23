// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int a=0,b=1,c;
//     if(n==1){
//         cout<<a<<endl;
//     }
//     else if(n==2){
//         cout<<a<<" "<<b<<endl;
//     }
//     else{
//         cout<<a<<" "<<b;
//         for(int i=2;i<n;i++){
//             c=a+b;
//             a=b;
//             b=c;
//             cout<<" "<<c;
//         }
//     }
// }





// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     if(n<0){
//         cout<<"Factorial doesn't exist"<<endl;
//     }
//     else if(n==0){
//         cout<<1<<endl;
//     }
//     else{
//         int fact=1;
//         for(int i=1;i<=n;i++){
//             fact*=i;
//         }
//         cout<<fact<<endl;
//     }
// }






// #include<iostream>
// using namespace std;


// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     if(n<=1){
//         cout<<"Neither a prime nor a composite number."<<endl;
//     }
//     else{
//         int found=0;
//         for(int i=2;i<n;i++){
//             if(n%i==0){
//                 found=1;
//                 break;
//             }
//         }
//         if(found==0){
//         cout<<"Prime"<<endl;
//         }
//         else{
//             cout<<"Not Prime"<<endl;
//         }
//     }
// }






// #include<iostream>
// using namespace std;
// #include<math.h>


// int main(){
//     int n,org,rem=0,am=0,count=0;
//     cout<<"Enter a number: ";
//     cin>>n;
//     org=n;
//     if(n>=0 && n<10){
//         cout<<"Armstrong Number"<<endl;
//         return 0;
//     }
//     else{
//         int temp=n;
//         while(n!=0){
//             count++;
//             n=n/10;
//         }
//         while(temp!=0){
//             rem=temp%10;
//             int pow=1;
//             for(int i=0;i<count;i++){
//                 pow=pow*rem;
//             }
//             am+=pow;
//             temp=temp/10;
//         }
//     }
//     if(org==am){
//             cout<<"Armstrong Number"<<endl;
//         }
//         else{
//             cout<<"Not an Armstrong Number"<<endl;
//         }
// }













// #include<iostream>
// using namespace std;
// #include<math.h>


// int main(){
//     int n,org,rem=0,pal=0,count=0;
//     cout<<"Enter a number: ";
//     cin>>n;
//     org=n;
//     if(n>=0 && n<10){
//         cout<<"Palindrome"<<endl;
//         return 0;
//     }
//     else{
//         while(n!=0){
//             rem=n%10;
//             pal=pal*10+rem;
//             n=n/10;
//         }
//     }
//     if(org==pal){
//             cout<<"Palindrome"<<endl;
//         }
//         else{
//             cout<<"Not a Palindrome"<<endl;
//         }
// }









// #include<iostream>
// using namespace std;


// int main(){
//     int n,org,str=0,rem=0;
//     cout<<"Enter a number: ";
//     cin>>n;
//     org=n;
//     if(n==0){
//         cout<<"Not a Strong Number"<<endl;
//         return 0;
//     }
//     if(n>0 && n<3){
//         cout<<"Strong Number"<<endl;
//         return 0;
//     }
//     else{
//         while(n!=0){
//             int fact=1;
//             rem=n%10;
//             for(int i=1;i<=rem;i++){
//                 fact*=i;
//             }
//             str += fact;
//             n=n/10;
//         }
//     }
//     if(org==str){
//             cout<<"Strong Number"<<endl;
//         }
//         else{
//             cout<<"Not a Strong Number"<<endl;
//         }
// }















// #include<iostream>
// using namespace std;

// int main(){
//     int n,pn = 0;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int org = n;
//     if(n<=0){
//         cout<<"Not a Perfect Number."<<endl;
//         return 0;
//     }
//     else{
//         for(int i=1;i<=(n/2);i++){     //for(int i=1;i*i<=n;i++)
//             if(n%i==0){
//                 pn += i;
//             }
//         }
//     }
//     if(org==pn){
//         cout<<"Perfect Number"<<endl;
//     }
//     else{
//         cout<<"Not a Perfect Number"<<endl;
//     }
// }















// #include<iostream>
// using namespace std;

// int main(){
//     int n,last = 0,square,count=0,rem = 0,digit=0,finrem=0,rev=0;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int org=n;
//     if(n<0){
//         cout<<"Not an Automorphic Number."<<endl;
//         return 0;
//     }
//     else{
//         square = n*n;
//         while(n!=0){
//             rem = n%10;
//             count++;
//             n/=10;
//         }

//         for(int i=0;i<count;i++){ 
//             last = square%10;
//             digit=digit*10+last;
//             square/=10;
//         }

//         while(digit!=0){
//             finrem = digit%10;
//             rev=rev*10+finrem;
//             digit/=10;
//         }

//     }
//     if(org==rev){
//         cout<<"Automorphic Number"<<endl;
//     }
//     else{
//         cout<<"Not an Automorphic Number"<<endl;
//     }
// }













// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     if(n < 0)
//     {
//         cout << "Not an Automorphic Number";
//         return 0;
//     }

//     int original = n;
//     int square = n * n;

//     while(original != 0)
//     {
//         if(original % 10 != square % 10)
//         {
//             cout << "Not an Automorphic Number";
//             return 0;
//         }

//         original /= 10;
//         square /= 10;
//     }

//     cout << "Automorphic Number";

//     return 0;
// }










// #include<iostream>
// using namespace std;

// int main(){
//     int n,org,rem=0,sum=0;
//     cout<<"Enter a number: ";
//     cin>>n;
//     org=n;
//     if(n<=0){
//         cout<<"UNDEFINED"<<endl;
//         return 0;
//     }

//     else{
//         while(n!=0){
//             rem = n%10;
//             sum += rem;
//             n/=10;
//         }
//     }
//     if(org%sum==0){
//         cout<<"Harshad Number"<<endl;
//     }
//     else{
//         cout<<"Not a Harshad Number"<<endl;
//     }
// }














// #include<iostream>
// using namespace std;

// int main(){
//     int n, org, rem = 0, sq = 0;

//     cout << "Enter a number: ";
//     cin >> n;

//     org = n;

//     if(n <= 0){
//         cout << "Not a Happy Number" << endl;
//         return 0;
//     }

//     else{
//         while(true){

//             while(n != 0){
//                 rem = n % 10;
//                 sq = sq + (rem * rem);
//                 n /= 10;
//             }

//             n = sq;

//             if(n == 1){
//                 cout << "Happy Number" << endl;
//                 break;
//             }

//             if(n == 4){
//                 cout << "Not a Happy Number" << endl;
//                 break;
//             }

//             sq = 0;
//         }
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     if(n <= 0)
//     {
//         cout << "Not a Happy Number" << endl;
//         return 0;
//     }

//     while(n != 1 && n != 4)
//     {
//         int sum = 0;

//         while(n != 0)
//         {
//             int rem = n % 10;
//             sum += rem * rem;
//             n /= 10;
//         }

//         n = sum;
//     }

//     if(n == 1)
//     {
//         cout << "Happy Number" << endl;
//     }
//     else
//     {
//         cout << "Not a Happy Number" << endl;
//     }

//     return 0;
// }














// #include<iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cout<<"Enter two numbers: ";
//     cin>>a>>b;

//     if(a <= 0 || b <= 0){
//         cout << "Invalid Input" << endl;
//         return 0;
//     }
//     else if(a == b){
//         cout << "GCD = " << a << endl;
//         return 0;
//     }
//     else if(a == 1 || b == 1){
//         cout << "GCD = 1" << endl;
//         return 0;
//     }
//     int small;
//     int arr[100];
//     if(a<b){
//         small=a;
//     }
//     else{
//         small=b;
//     }

//     for(int i=0;i<small/2;i++){
//         if(a%(i+1)==0 && b%(i+1)==0){
//             arr[i]=i+1;
//         }
//         else{
//             arr[i]=0;
//         }
//     }
//     int max = arr[0];

//     for(int i = 1; i < small/2; i++){
//     if(arr[i] > max){
//         max = arr[i];
//     }
// }

//     cout << "GCD = " << max << endl;


// }










// #include<iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cout<<"Enter two numbers: ";
//     cin>>a>>b;

//     if(a <= 0 || b <= 0){
//         cout << "Invalid Input" << endl;
//         return 0;
//     }
//     else if(a == b){
//         cout << "GCD = " << a << endl;
//         return 0;
//     }
//     else if(a == 1 || b == 1){
//         cout << "GCD = 1" << endl;
//         return 0;
//     }
//     int small;
//     if(a<b){
//         small=a;
//     }
//     else{
//         small=b;
//     }

//     for(int i = small; i >= 1; i--)
//     {
//     if(a % i == 0 && b % i == 0)
//     {
//         cout << "GCD = " << i;
//         break;
//     }
// }
// }










// #include<iostream>
// using namespace std;

// int main(){
//     int a,b,gcd=1;

//     cout<<"Enter two numbers: ";
//     cin>>a>>b;

//     int small;

//     if(a<b)
//         small=a;
//     else
//         small=b;

//     for(int i=1;i<=small;i++){
//         if(a%i==0 && b%i==0){
//             gcd=i;
//         }
//     }

//     cout<<"GCD = "<<gcd;

//     return 0;
// }










// #include<iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cout<<"Enter two numbers: ";
//     cin>>a>>b;

//     if(a <= 0 || b <= 0){
//         cout << "Invalid Input" << endl;
//         return 0;
//     }
//     else if(a == b){
//         cout << "GCD = " << a << endl;
//         return 0;
//     }
//     else if(a == 1 || b == 1){
//         cout << "GCD = 1" << endl;
//         return 0;
//     }
//     int temp;
//     while(b!=0){
//         temp=b;
//         b=a%b;
//         a=temp;
//     }
//     cout<<"GCD = "<<a;
// }














// #include<iostream>
// using namespace std;

// int main(){
//     int a, b;

//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     if(a <= 0 || b <= 0){
//         cout << "Invalid Input" << endl;
//         return 0;
//     }

//     int large;

//     if(a > b){
//         large = a;
//     }
//     else{
//         large = b;
//     }

//     while(true){
//         if(large % a == 0 && large % b == 0){
//             cout << "LCM = " << large << endl;
//             break;
//         }

//         large++;
//     }

//     return 0;
// }















// #include<iostream>
// using namespace std;

// int main(){
//     int a, b;

//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     if(a <= 0 || b <= 0){
//         cout << "Invalid Input" << endl;
//         return 0;
//     }

//     int x = a;
//     int y = b;

//     while(y != 0){
//         int temp = y;
//         y = x % y;
//         x = temp;
//     }

//     int gcd = x;
//     int lcm = (a * b) / gcd;

//     cout << "LCM = " << lcm << endl;

//     return 0;
// }















// #include<iostream>
// using namespace std;

// int main(){
//     int n, arr[100], i = 0;

//     cin >> n;

//     while(n != 0){
//         arr[i] = n % 2;
//         n /= 2;
//         i++;
//     }

//     for(int j = i - 1; j >= 0; j--){
//         cout << arr[j];
//     }
// }














// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int binary = 0;
//     int place = 1;

//     while(n != 0){
//         int rem = n % 2;
//         binary = binary + rem * place;
//         place *= 10;
//         n /= 2;
//     }

//     cout << binary;
// }


















// #include<iostream>
// using namespace std;

// int main(){
//     int binary;

//     cout<<"Enter Binary Number: ";
//     cin>>binary;

//     int decimal = 0;
//     int power = 1;

//     while(binary != 0){
//         int rem = binary % 10;
//         decimal = decimal + rem * power;
//         power = power * 2;
//         binary = binary / 10;
//     }

//     cout<<"Decimal = "<<decimal;

//     return 0;
// }













// #include<iostream>
// #include<cmath>
// using namespace std;

// int main(){
//     int binary, decimal = 0, i = 0;

//     cin >> binary;

//     while(binary != 0){
//         int rem = binary % 10;
//         decimal += rem * pow(2, i);
//         i++;
//         binary /= 10;
//     }

//     cout << decimal;
// }