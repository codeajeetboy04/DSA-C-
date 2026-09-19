#include<iostream>
using namespace std;

void reversestring(string &str,int i,int j){
    
    //base case
    if(i > j){
        return ;
    }

    swap(str[i],str[j]);

    //recursion call 
    reversestring(str,i+1,j-1);
}
int main(){

    string str = "niraj";

    reversestring(str,0,str.length()-1);

    cout << str << endl;
    return 0;
}