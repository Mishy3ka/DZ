#include<iostream>
using namespace std;
int main(){
    float num1;
    float num2;
    float resr;
    float rest;
    cout<<"Введите первое число: ";
    cin>>num1;
    cout<<"Введите второе число: ";
    cin>>num2;
    rest=num1*num2;
    cout<<"Произведение этих чисел: ";
    cin>>resr;
    if(resr==rest){
        cout<<"Все верно";
    }
    else{
        cout<<"Неверно!\n";
        cout<<"Верный отве:"<<rest;
    }
}