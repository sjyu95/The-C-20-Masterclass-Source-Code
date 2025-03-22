#include <iostream>
#include "engineer.h"
#include "nurse.h"
#include "person.h"
#include "player.h"

int main() {
    Player p1{"Holly Gally", "Sejung", "Yoo"};
    std::cout << p1 << std::endl;

    Nurse n1{"Catholic hospital", 42, "Sejung", "Yoo"};
    std::cout << n1 << std::endl;
    // std::cout << "nurse : protected person : m_firstName : " << n1.getFirstName() << std::endl;
    // error C2247: 'Person::getFirstName'에 액세스할 수 없습니다. 이는 'Nurse'이(가) 'protected'을(를) 사용하여 'Person'에서 상속하기 때문입니다.

    Engineer e1{"Hostway", "Sejung", "Yoo"};
    std::cout << e1 << std::endl;
    // std::cout << "engineer : private person : m_firstName : " << e1.getFirstName() << std::endl;
    // error C2247: 'Person::getFirstName'에 액세스할 수 없습니다. 이는 'Engineer'이(가) 'private'을(를) 사용하여 'Person'에서 상속하기 때문입니다.
    e1.Print();

    return 0;
}