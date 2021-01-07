#ifndef ITERATOR_T_H
#define ITERATOR_T_H

template <typename T>
class Iterator{
public:
    virtual bool Next() = 0;
    virtual bool Prev() = 0;
    virtual T GetData() = 0;
    virtual bool isValuable() = 0;
};

template <typename T>
class Iterable{
public:
    virtual Iterator<T>* begin() = 0;
    virtual Iterator<T>* end() = 0;
};

#endif
