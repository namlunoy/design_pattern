// product.cpp
#include "product.h"

Product::Product()
{

}

Product::Product(const Product::Builder &builder)
{
    mId = builder.mId;
    mName = builder.mName;
    mDesc = builder.mDesc;
    mValue = builder.mValue;
}

Product::Product(const Product &copyObject)
{
    cout << "Product Copy Constructor" << endl;
}

Product::Builder *Product::newBuilder()
{
     return new Builder();
}

string Product::id() const
{
    return mId;
}

void Product::setId(const string &id)
{
    mId = id;
}

string Product::name() const
{
    return mName;
}

void Product::setName(const string &name)
{
    mName = name;
}

string Product::desc() const
{
    return mDesc;
}

void Product::setDesc(const string &desc)
{
    mDesc = desc;
}

string Product::value() const
{
    return mValue;
}

void Product::setValue(const string &value)
{
    mValue = value;
}
