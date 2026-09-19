#include<iostream>
using namespace std;

int factorial(int n){

    //base case
    if(n == 0 || n == 1){
        return 1;
    }

    //recursion call
    return n * factorial(n - 1);
}
int main(){
    int n;
    cout << "Enter a number: " ;
    cin >> n;

    int ans = factorial(n);

    cout << "Factorial is: " << ans << endl;

    return 0;
}