#include "100 ������.h"

void unit_test()
{
    assert(check_number_match(2, 100) == true);
    assert(check_number_match(10, 100) == true);
    assert(check_number_match(15, 100) == false);
    std::cout << "Unit-tests ���������!\n\n";
}
