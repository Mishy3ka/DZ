//Типы данных переменные константы
/*Задача: Объявить переменные с помощью которых можно будет сосчитать общую сумму покупкт нескольких товраов. Например плитки школада, кофе и пакеты молока
*/



#include <iostream>
using namespace std;
int main(){
    setlocale(LC_ALL, "RU");
    int chocolate = 2; // Хранит кол-во упаковок
    int milk = 3;
    int coffee = 1;
    
    
    float priceofchocolate = 11.04; // хранит цену за 1 упаковку
    float priceofmilk = 9.59; 
    float pricecoffee = 70.77;
    
    
    float sum = 0; //общая сумма
    
// считаем стоимость

    sum =(chocolate*priceofchocolate)+(milk*priceofmilk)+(coffee*pricecoffee);
    cout<<"Общая стоимость покупки = "; //показываем расчет и общую стоимость на экран
    cout<< chocolate * priceofchocolate <<"+"<< milk*priceofmilk<<"+"<<coffee*pricecoffee;
    cout<<" = "<< sum << endl<<endl;
    
    

  return 0;  
}