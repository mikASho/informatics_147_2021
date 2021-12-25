#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
    string student_FIO;
    int course, group, age;
    
    public:
    void Input();
    void Show();
};



int main()
{
    setlocale(LC_ALL, "");
    Student student;
    student.Input();
    student.Show();
 
    return 0;
}

void Student::Input(){
    cout << "Введите ФИО студента: ";
    getline(cin, student_FIO);
    cout << endl <<  "Введите курс студента: ";
    cin >> course;
    cout << endl <<  "Введите группу студента: ";
    cin >> group;
    cout << endl <<  "Введите возраст студента: ";
    cin >> age;
};

void Student::Show(){
    cout << "Студент: " << student_FIO <<endl 
         << "Курс: " << course << endl
         << "Группа: " << group << endl
         << "Возраст: " << age;
    
};