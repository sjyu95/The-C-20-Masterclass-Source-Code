#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape{
public:
    Shape() = default;
    Shape(std::string_view desc);

    virtual void draw() const;
    virtual int getCount() const;

    static int mCount;

private:
    std::string mDescription;
};

#endif