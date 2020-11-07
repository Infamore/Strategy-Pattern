#ifndef __VECT_CONTAINER_HPP__

#define __VECT_CONTAINER_HPP__



#include <iostream>

#include "sort.hpp"

#include "base.hpp"

#include "container.hpp"

#include <vector>



using namespace std;



class VectorContainer : public Container {

    private:

        vector<Base*> vect;



    public:

        /* Constructors */

         

        /* Non Virtual Functions */

        void set_sort_function(Sort* sort_fun) {sort_function = sort_fun;} // set the type of sorting algorithm



        /* Pure Virtual Functions */

        // push the top pointer of the tree into container

        void add_element(Base* element) {vect.push_back(element);}

        // iterate through trees and output the expressions (use stringify())

        void print() { for (int i = 0; i < vect.size() - 1; i++) cout << vect[i]->stringify() << " "; }

        // calls on the previously set sorting-algorithm. Checks if sort_function is not null, throw exception if otherwise

        void sort() {sort_function->sort(this);}



        /* Essentially the only functions needed to sort */

        //switch tree locations

        void swap(int i, int j) { Base* temp = vect[i]; vect[i] = vect[j]; vect[j] = temp; } 

        // get top ptr of tree at index i

        Base* at(int i) {return vect[i];}

        // return container size

        int size() {return vect.size();}

};



#endif //__VECT_CONTAINER_HPP__
