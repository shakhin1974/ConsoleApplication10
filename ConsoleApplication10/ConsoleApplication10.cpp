#include <iostream>
#include<string>
#include <windows.h>
#include <iomanip>
#include"Header.h"
#define M 'М'
#define J 'Ж'
using namespace std;
class students
{public:
     int id{0}; 	 string fio = ""; 
    string  gruppa ="";
private:
    int age{0}; char pol{'0'};
    int ves{0};  float rost{0.00};  int stependia{0}; 
public:
    void Vozr(int vozr)
    {
        age = vozr;
    }
    void Gend(char gen)
    {
        pol = gen;
    }
    void desplay() {
        cout << setw(3) << left << id << setw(18) << left << fio
            << setw(7) << left << age << setw(7) << left <<pol << setw(7) << left << gruppa << endl;
    };
};
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    students s1;
    s1.id = 1;
    s1.fio = "Иванова Анна";
    s1.gruppa = "2ИСИП-222";
    s1.Vozr(18);
    s1.Gend(J);
    s1.desplay();
    return 0;

}
