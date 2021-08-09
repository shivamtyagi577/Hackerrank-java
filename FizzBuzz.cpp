#include<iostream>
#include<vector>
#include<string>
using namespace std;

//Complete this method, don't write main
vector<string> fizzbuzz(int n){
    vector<string> output;
    vector<string> output;
    for(int i = 1; i <= n; i++){
        if(i%15==0){
            output.push_back("FizzBuzz");
        }
        else if(i%3==0 || i%5==0){
            if(i%3==0){
                output.push_back("Fizz");
            }
            else{
                output.push_back("Buzz");
            }
        }
        else{
            output.push_back(to_string(i));
        }
    }
    return output;
      
}

int main(){
    vector<string> result = fizzbuzz(15);
    for(string x : result){
        cout << x <<",";
    }
    return 0;
}
