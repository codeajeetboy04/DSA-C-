#include<iostream>
using namespace std;

bool checkpalindrome(string str,int i,int j){

    //base case
    if(i > j){
        return true;
    }

    if(str[i] != str[j]){
        return false;
    }
    else{
        //recursion call
        return  checkpalindrome(str,i+1,j-1);
    }
}
int main(){

    string str = "bookkoob";

    bool ispalindrome = checkpalindrome(str,0,str.length()-1);

    if(ispalindrome){
        cout <<"it is palindrome " << endl;
    }
    else{
        cout << "it is not palindrome " << endl;
    }
    return 0;
}