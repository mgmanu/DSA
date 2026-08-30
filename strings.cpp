// #include<iostream>
// using namespace std;

// int main(){
//     string s;
//     cout<<"Enter a string: ";
//     getline(cin,s);
//     int len = s.length();
//     int count=0;
//     for(int i=0;i<len;i++){
//         if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' ||
//         s[i]=='U' || s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||
//     s[i]=='u'){
//         count++;
//     }
//     }
//     cout<<count<<endl;
// }










// #include<iostream>
// using namespace std;

// int main(){
//     string s;
//     cout<<"Enter a string: ";
//     getline(cin,s);
//     int len = s.length();
//     for(int i=0;i<len;i++){
//         if(i%2==0){
//             s[i]='a';
//         }
//     }
//     cout<<s;
    
// }















#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    int len = s.length();
    int i = 0,j=len/2-1;
    while(i<j){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    cout<<s;
    
} 