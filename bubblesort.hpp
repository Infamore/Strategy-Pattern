#ifndef __BUBBLESORT_HPP__

#define __BUBBLESORT_HPP__



#include "sort.hpp"

#include "container.hpp"

#include "base.hpp"



class BubbleSort : public Sort

{

	public:

	void swap(Base* spot1, Base* spot2) {Base* temp = spot1; spot1 = spot2; spot2 = temp;}



	void sort(Container* contain, int n) {

	     int i, j; 

   	     bool swapped; 

   	     for (i = 0; i < n-1; i++) 

             { 

             swapped = false; 

             for (j = 0; j < n-i-1; j++) 

             { 

                if (contain->at(j)->evaluate() > contain->at(j+1)->evaluate()) 

                { 

                   contain->swap(j, j+1); 

                   swapped = true; 

                } 

             } 	



	     }



}

};

#endif
