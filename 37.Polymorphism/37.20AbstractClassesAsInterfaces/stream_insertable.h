#ifndef STREAM_INSERTABLE_H
#define STREAM_INSERTABLE_H

#include <ostream>

class IStreamInsertable {
    friend std::ostream& operator<<(std::ostream& os, const IStreamInsertable& lhs);
public:
    virtual ~IStreamInsertable() = default;

    virtual void stream_insert(std::ostream& os) const = 0;
};

#endif