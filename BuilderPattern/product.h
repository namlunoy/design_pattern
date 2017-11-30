// product.h
#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>

using namespace std;

class Product
{
private:
    class Builder{
    public:
        Builder();
        ~Builder();

        // Build functions
        Builder* id(const string& id);
        Builder* name(const string& name);
        Builder* desc(const string& desc);
        Builder* value(const string& value);
        Product build();

    public:
        string mId;
        string mName;
        string mDesc;
        string mValue;
    };

public:
    Product();

    Product(const Builder& builder);
    Product(const Product& copyObject);

    static Builder* newBuilder();

    // seters & getters
    string id() const;
    void setId(const string &id);

    string name() const;
    void setName(const string &name);

    string desc() const;
    void setDesc(const string &desc);

    string value() const;
    void setValue(const string &value);

private:
    string mId;
    string mName;
    string mDesc;
    string mValue;
};

#endif // PRODUCT_H
