#include "100 спичек.h"

bool check_number_match(int n_pl_match, int quant)
{
    bool check = false;
    if (n_pl_match >= 1 && n_pl_match <= 10 && n_pl_match <= quant)
        check = true;
    else
    {
        std::cout << "Неверно! Повторите ввод!\n";
        check = false;
    }
    return check;
}