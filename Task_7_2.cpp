#include <iostream>
#include <string>
using namespace std;

class Employee{
    public:
    string FIO, adress, phone_number, position;
    int amount_work_hours, price_hour, experience;
    int part_sal, all_pay;
     
    
    Employee(string f, string pos, string ad, string ph_n, int ex, int a_w_h, int pr_h){
        FIO = f;
        position = pos;
        adress = ad;
        phone_number = ph_n;
        experience = ex;
        amount_work_hours = a_w_h;
        price_hour = pr_h;
    }
    
    void output(){
        cout << "ФИО сотрудника: " << FIO <<endl 
         << "Должность: " << position << endl
         << "Адрес: " << adress << endl
         << "Номер телефона: "<< phone_number << endl
         << "Стаж: " << experience <<endl
         << "Количество отработанных часов: "<< amount_work_hours << endl
         << "Оплата за час: " << price_hour << endl;
    }
    
    void salary(){
        part_sal = amount_work_hours * price_hour;
        cout <<"Зарплата без стажа: " << part_sal << endl;
    }
    
    void seniority(){
        if(experience >= 1 and experience <= 3){
           all_pay = part_sal * 1.03; 
        }
        if(experience > 3 and experience <= 6){
           all_pay = part_sal * 1.05; 
        }
        if(experience > 6 and experience <= 9){
           all_pay = part_sal * 1.07; 
        }
        if(experience >= 10){
           all_pay = part_sal * 1.13; 
        }
        cout <<"Зарплата с учетом стажа: " << all_pay << endl;
    }
};



int main()
{
    setlocale(LC_ALL, "");
    
    Employee Worker("Ivanov Ivan Ivanovich", "black hacker", "Derevnya hackerka", "+7(945) *** ** **", 11, 240, 500);
    Worker.output();
    Worker.salary();
    Worker.seniority();
 
    return 0;
}