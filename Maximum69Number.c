//
// Created by Anmol Khanna on 07/11/22.
//
#include <math.h>
#include <stdio.h>
int maximum69Number (int num){
    int temp=num;
    int index=-1;
    for(int i=0;temp!=0;i++){
        if(temp%10==6){
            index=i;
        }
        temp/=10;
    }
    if(index==-1)return num;
    else{
        int dump=num;
        temp=dump/(int)pow(10,index);
        return (temp+3)*(int)pow(10,index)+num%(int)pow(10,index);
    }
}
int main(){
    printf("Result: %d",maximum69Number(9669));
    return 0;
}
