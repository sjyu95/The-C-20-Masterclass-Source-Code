#include <iostream>
#include "stream_insertable.h"

std::ostream& operator<<(std::ostream& os, const IStreamInsertable& lhs) {
    lhs.stream_insert(os);
    return os;
}