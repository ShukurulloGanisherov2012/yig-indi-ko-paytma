#include <iostream>
using namespace std;
int main(){
    int A,B;
    cin >> A >> B;
    int s=0;
    int c=1;
    for(int i=A;i<B;i++){
        if(i%2==0){
            s = s+i;
        }else{
            c = c*i;
        }
    }
    cout << "Yig'indi - " << s << endl;
    cout << "Ko'paytma - " << c;
}

