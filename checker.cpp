#include <bits/stdc++.h>
 
using namespace std;
 
int main() {

    int test_cases = 0; //change here
    
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    for(int i=1;i<=test_cases;i++){
        cout<<"checking test "<<i<<endl;
        string s="./main <./testcases/test-"+to_string(i)+".txt | diff ./testcases/result-test-"+to_string(i)+".txt -";
        system(&s[0]);
    }
    
    return 0;
}
