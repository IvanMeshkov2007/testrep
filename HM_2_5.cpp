// HM_2_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>;
#include <map>;
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    map <string, int>  products{
    {"bread", 1}, {"milk", 2}, {"apple", 3},{"orange",4},{"tea",5}
    };
    for (auto elem : products) {
        cout << elem.first <<" " << elem.second << "\n";
    }
    cout << "\n";
    products.insert({"water", 7 });
    products.insert({"coffe", 6 });
    for (auto elem : products) {
        cout << elem.first << " " << elem.second << "\n";
    }

}

