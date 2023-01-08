#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    stack s;
    infotype x;

    createStack_1301213292(s);

    push_1301213292(s, "A");
    push_1301213292(s, "Y");
    push_1301213292(s, "A");
    push_1301213292(s, "J");
    push_1301213292(s, "B");
    push_1301213292(s, "A");
    push_1301213292(s, "L");
    push_1301213292(s, "F");
    push_1301213292(s, "I");
    printInfo_1301213292(s);

    cout << endl;

    x = pop_1301213292(s);
    x = pop_1301213292(s);
    x = pop_1301213292(s);
    x = pop_1301213292(s);
    x = pop_1301213292(s);
    printInfo_1301213292(s);


}
