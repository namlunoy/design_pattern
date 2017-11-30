// productbuilder.cpp
#include "product.h"

Product::Builder::Builder()
{
    cout << "Builder()" << endl;
}

Product::Builder::~Builder()
{
    cout << "~Builder()" << endl;
}

Product::Builder *Product::Builder::id(const string &id)
{
    mId = id;
    return this;
}

Product::Builder *Product::Builder::name(const string &name)
{
    mName = name;
    return this;
}

Product::Builder *Product::Builder::desc(const string &desc)
{
    mDesc = desc;
    return this;
}

Product::Builder *Product::Builder::value(const string &value)
{
    mValue = value;
    return this;
}

Product Product::Builder::build()
{
    Product tempInstace = Product(*this);
    delete this;
    return tempInstace;
}
