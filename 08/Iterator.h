#ifndef ITER
#define ITER

namespace fhdo_pk2 {

    class Iterator {
    public:
        virtual bool hasNext() = 0;
        virtual const char* next() = 0;
    };

}  // namespace fhdo_pk2

#endif