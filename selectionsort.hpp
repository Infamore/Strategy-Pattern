#ifndef SELECTIONSORT_H

#define SELECTIONSORT_H

#include <string>

#include "sort.hpp"

#include "container.hpp"

#include "base.hpp"

class selectionsort : public Sort {



  public:

        void sort(Container* contain) {

    int i, j, min_idx;





    for (i = 0; i < contain->size() - 1; i++)

    {



        min_idx = i;

        for (j = i+1; j < contain->size(); j++)

          if (contain->at(j)->evaluate() < contain->at(min_idx)->evaluate())

            min_idx = j;





        contain->swap(min_idx, i);

      }

}

};

#endif
