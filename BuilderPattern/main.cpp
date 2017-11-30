// main.cpp
#include <iostream>
#include "product.h"

using namespace std;

int main()
{
    // Note that the copy constructor wasn't called! ???
    Product p = Product::newBuilder()->id("11-001-1")
                    ->name("Hoang Van Cong")
                    ->desc("Dep trai va de thuong")
                    ->value("1000$")
                    ->build();

    cout << "Info: " << endl
         << p.name() << endl
         << p.desc() << endl
         << p.value() << endl;

    return 0;
}
