#include "100math.h"

bool check_number_match(int n_pl_match, int quant)
{
    bool check = false;
    if (n_pl_match >= 1 && n_pl_match <= 10 && n_pl_match <= quant)
        check = true;
    else
    {
        std::cout << "�������! ��������� ����!\n";
        check = false;
    }
    return check;
}