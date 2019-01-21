#ifndef T_SWAP_HH
#define T_SWAP_HH

#include <stdexcept>

template<typename T>
  T swap(T& t1, T& t2) {
    if (sizeof(t1) != sizeof(t2)){
      throw std::invalid_argument( "data types don't match" );
    }
    T temp;
    temp= t1;
    t1= t2;
    t2= temp;
    return 0;
};

#endif
