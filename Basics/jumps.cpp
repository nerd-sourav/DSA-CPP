#include <iostream>
using namespace std;
int main(){
    int pocketMoney = 3000;
    for (int  date = 1  ; date <= 30; date++)
    {
        if(date%2 == 0){
            continue;
        }
                    cout<<"Go Out Today"<< endl;
        
    pocketMoney -=300;
    if(pocketMoney == 0){
        cout<<"money Over"<<endl;
        break;
    }
    }
    
    return 0;
}
