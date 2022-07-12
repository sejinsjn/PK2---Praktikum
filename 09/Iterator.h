#ifndef ITER
#define ITER

namespace fhdo_pk2 {
    template <typename T> class Iterator {
    public:
        virtual bool hasNext() = 0;
        virtual const T* next() = 0;
    };

}  // namespace fhdo_pk2

#endif