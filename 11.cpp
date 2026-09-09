#include <iostream>
using namespace std;
int summ(int num){   
     return (num%10)+(num/10%10);

    
}
int odd(string creditnum){
     int sum=0;
     for(int i=creditnum.size()-1;i>=0;i-=2){
        sum+=(creditnum[i]-'0');
     }
     return sum;
}
int evv(string creditnum){
    int sum=0;
 for(int i =creditnum.size()-2;i>=0;i-=2){
     sum+=summ((creditnum[i]-'0')*2);
    }
    return sum;
        
}


int main(){
    string creditnum;
    cout<<"give me ur credit card num: ";
    cin>>creditnum;
    int res=odd(creditnum)+evv(creditnum);
    if (res%10==0){
        cout<<"valid";
        
    }else{
        cout<<"not valid";
    }
    
 

}