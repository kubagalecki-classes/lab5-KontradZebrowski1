#include "Human.hpp"
#include <iostream>
#include <list>
#include <vector>

int main()
{
    /*std::vector< int > wektor;
    std::cout << "rozmiar: " << wektor.size() << "\n";
    std::cout << "pojemnosc: " << wektor.capacity() << "\n";

    for (int i = 0; i < 100; i++) {
        wektor.emplace_back(1);
        std::cout << "iteracja: " << i << "\n";
        std::cout << "rozmiar: " << wektor.size() << "\n";
        std::cout << "pojemnosc: " << wektor.capacity() << "\n";
        std::cout << "adres: " << &wektor[0] << "\n\n";
    }*/
    /*std::vector< int > wektor{100, 42};
    std::cout << "rozmiar: " << wektor.size() << "\n";
    std::cout << "pojemnosc: " << wektor.capacity() << "\n";*/
    /*
        bool                 state = 1;
        std::vector< Human > Humanity;
        std::string          name;

        while (state) {
            std::cin >> name;
            std::cout << "\n";
            if (name == "Death") {
                state = 0;
            }
            else if (name == "pop") {
                Humanity.pop_back();
            }
            else if (name == "list") {
                // std::vector< Human >::iterator it = Humanity.begin();
                for (Human e : Humanity) {
                    std::cout << e.getName() << "\n";
                }
            }

            else {
                Humanity.emplace_back(Human{name, 18, 0, 0});
            }
        }
        */

    ///*
    std::list< int > Lista;
    Lista.emplace_back(248);
    Lista.emplace_back(249);
    std::cout << &Lista.front() << "\n";
    std::cout << &Lista.back() << "\n";
    Lista.emplace_front(14);
    Lista.emplace_front(12);
    Lista.emplace_front(13);
    std::cout << &Lista.front() << "\n";
    // std::cout << Lista[2] << "\n";
    // std::list< int >::reverse_iterator it = Lista.rbegin();
    for (int it : Lista) {

        std::cout << it << "\n";
    }
    //*/

    /*
    std::vector< int >           v{1, 2, 3};
    std::vector< int >::iterator it = v.begin();

    // Jawnie drukujemy zawartość wektora
    std::cout << *it++;
    std::cout << *it++;
    std::cout << *it;
    */
}
