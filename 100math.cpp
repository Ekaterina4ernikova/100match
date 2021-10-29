
#include "100math.h"


using namespace std;

const int InitialCount = 100;




void game()
{
  int Count, Num, Player;
  bool Correct;

  Player = 2;
  Count = InitialCount;

    do {
         if (Player == 1)
                Player = 2;
         else
                Player = 1;
        if (Player == 1) {
            do {
                std::cout << "Ваш ход. На столе " << Count << " спичек.\n";
                std::cout << "Сколько спичек Вы берете?\n";
                std::cin >> Num;
                Correct = check_number_match(Num, Count);
                } while (!Correct);
            }
            else
            {
                do {
                    Num = rand() % 10 + 1;
                    if (Num > Count)
                        Num = Count;
                    std::cout << "Мой ход. Я взял " << Num << " спичек\n";
                } while (!Correct);
            }
            Count -= Num;

        } while (Count > 0);

        if (Player == 1)
            std::cout << "Вы победили!\n";
        else
            std::cout << "Вы проиграли!\n";
    }

void print_menu() {
    cout << "Выберете пункт меню: " << endl;
    cout << "1. Правила" << endl;
    cout << "2. Играть" << endl;
    cout << "3. Выход" << endl;
    cout << ">";
}

void prav() {
    cout << " Из кучки, первоначально содержащей 100 спичек, двое играющих поочередно\n берут по несколько спичек: не менее одной и не более десяти.\n Выигрывает взявший последнюю спичку." << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    system("cls");

    int variant;

    do {
        print_menu();
        cin >> variant;

        switch (variant) {
        case 1:
            prav();
            break;

        case 2:
            game();
            break;

        }

    } while (variant != 3);

    return 0;
}

