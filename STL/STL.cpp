#include <string>
#include <stdlib.h>
#include <iostream>
#include <list> 
#include <iterator>
#include <clocale>

using namespace std;

struct Sportsman
{
    string name;
    int data;
    int rate;
};

int main()
{

    setlocale(LC_ALL, "Russian");
    Sportsman sportsman;
    list <Sportsman> SL;
    list<Sportsman>::iterator SI;

    int q;
    while (1)
    {
        cout << "1. Добавить спортсмена в каталог, жмите 1. " << endl;
        cout << "2. Удалить спортсмена из каталога, дата рождения которого ниже заданой, жмите 2" << endl;
        cout << "3. Поиск спортсмена с наибольшим рейтингом, жмите 3" << endl;
        cout << "4. Вывод всех спортсменов" << endl;
        cout << "5. Закончить выполение программы" << endl;

        cin >> q;

        switch (q)
        {
        case 1:
        {
            system("cls");
            cout << "Имя спортсмена: ";
            cin >> sportsman.name;
            cout << "Дата рождения: ";
            cin >> sportsman.data;
            cout << "Рейтинг спортсмена: ";
            cin >> sportsman.rate;
            SL.push_front(sportsman);
        } break;
        case 2:
        {
            system("cls");
            int e;
            cout << "Введите дату для удаления:";
            cin >> e;
            for (SI = SL.begin(); SI != SL.end(); ++SI)
            {
                if (e > SI->data)
                {
                    cout << SI->name << " " << SI->data << " " << SI->rate << " - спортсмен удален" << endl;
                    SL.erase(SI);
                    SI = SL.begin();
                }
            }

        }break;

        case 3:
        {
            system("cls");
            int emax = NULL;
            cout << "Спортсмен с наибольшим рейтингом: ";
            for (SI = SL.begin(); SI != SL.end(); ++SI)
            {
                if (emax < SI->rate)
                {
                    emax = SI->rate;
                }

            }
            for (SI = SL.begin(); SI != SL.end(); ++SI)if (SI->rate == emax)break;
            cout << SI->name << " " << SI->data << " " << SI->rate << endl;
        }break;

        case 4:
        {
            system("cls");
            for (SI = SL.begin(); SI != SL.end(); ++SI)
                cout << SI->name << " " << SI->data << " " << SI->rate << endl;
        }break;

        case 5:
        {return 0;}break;
        }
    }
}
