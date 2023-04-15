#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::cout<<"Гречки имеется (кг): ";
    int cereal;
    std::cin>>cereal;

    std::cout<<"Для экономного потребления в месяц требуется (кг): ";
    int monthCereal;
    std::cin>>monthCereal;

    if (cereal>0 && monthCereal>0) {

        int counter;

        for (counter=1; cereal > 0; counter++) {
            cereal-=monthCereal;
            if (cereal>=0) {
                std::cout<<"После "<<counter<<" месяца у вас осталось "<<cereal<<" кг гречки\n";
            } else {
                std::cout<<"После "<<counter<<" месяца у вас осталось "<<0<<" кг гречки\n";
            }
        }

    } else {
        std::cout<<"Введены неверные данные!";
    }

}
