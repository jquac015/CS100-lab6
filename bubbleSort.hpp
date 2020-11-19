#ifndef __BUBBLESORT_HPP__
#define __BUBBLESORT_HPP__

#include "sort.hpp"
using namespace std;

class BubbleSort : public Sort {
public:
    BubbleSort(){};

    virtual void sort(Container* c){
        for(int i = 0; i < c->size(); ++i){
            for(int j = i + 1; j < c->size(); ++j){
                if(c->at(i)->evaluate() > c->at(j)->evaluate()){c->swap(i, j);}
            }
        }
    }
};

#endif