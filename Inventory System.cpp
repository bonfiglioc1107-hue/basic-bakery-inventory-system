#include <iostream>
#include <vector>
using namespace std;



void enterGoods(int& cake, int& pastry, int& muffin){
    cout << "How many cakes do you have" <<endl;
    cin >> cake;
    cout << "How many pastries do you have" <<endl;
    cin >>pastry;
    cout << "How many muffins do you have" <<endl;
    cin >> muffin;
}

void enterOrders(int& cakeOrders, int& pastryOrders, int& muffinOrders){
    cout << "Enter the amount of cakes ordered"<<endl;
    cin >>cakeOrders;
    cout << "Enter the amount of pastries ordered"<<endl;
    cin >>pastryOrders;
    cout << "Enter the amount of muffins ordered"<<endl;
    cin >>muffinOrders;
}

void compare(int cakeNum,int pastryNum,int muffinNum,int cakeOrders,int pastryOrders,int muffinOrders){
    cout <<"Cakes left: " <<cakeNum - cakeOrders <<endl;
    cout <<"Pastries left: " <<pastryNum - pastryOrders <<endl;
    cout <<"Muffins left: " <<muffinNum - muffinOrders <<endl;
}

int main(){

    int cakeNum, pastryNum, muffinNum;
    int cakeOrders, muffinOrders, pastryOrders;

    //Function for entering how much you have of each good
    enterGoods(cakeNum, pastryNum, muffinNum);
    
    //Function for entering how much of each good was ordered
    enterOrders(cakeOrders, pastryOrders, muffinOrders);
    
    //compares how many you have vs how many you need.
    compare(cakeNum,pastryNum,muffinNum,cakeOrders,pastryOrders,muffinOrders);
            
            
        

    
    return 0;
}