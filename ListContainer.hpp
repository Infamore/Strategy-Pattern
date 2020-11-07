#ifndef __LIST_CONTAINER__

#define __LIST_CONTAINER__



#include "container.hpp"

#include "sort.hpp"

#include "base.hpp"

#include <list>

#include <iterator>

#include <algorithm>

using namespace std;



class ListContainer: public Container {

  private:

  	list<Base*> LC;

  public:

  	

  	void set_sort_function(Sort* sort_function) {

      this->sort_function = sort_function;

    }

  	

  	void add_element(Base* element) {

      LC.push_back(element);

    }

  

  	void print() {

      list<Base*> temp;

      for (int i = 0; i < LC.size(); i++) {

        LC.front()->stringify();

        temp.push_back(LC.front());

        LC.pop_front();

      }

      LC = temp;

    }

  	void sort() {

      if (sort_function == 0) {

        throw "Error, cant have sort_function = 0";

        return;

      }

      sort_function->sort(this);

    }

  	void swap(int i, int j) {

                    Base* temp;

                list<Base*>::iterator it1 = LC.begin();

                list<Base*>::iterator it2 = LC.begin();



                for (int z = 0; z < i; z++) {

                               it1++;

                }



                temp = *it1;



                for (int z = 0; z < j; z++) {

                        it2++;



                }



                *it1 = *it2;

                *it2 = temp; 

    }

  	Base* at(int i) {

       list<Base*>::iterator it = LC.begin();

         for(int j=0; j < i; j++){

                ++it;

          }

        return *it;

    }

  	int size() {

      return LC.size();

    }

};

#endif
