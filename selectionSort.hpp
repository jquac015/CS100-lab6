#ifndef __SELECTIONSORT_HPP__
#define __SELECTIONSORT_HPP__

#include "sort.hpp"
using namespace std;

class SelectionSort : public Sort {
public:
    SelectionSort(){};

    virtual void sort(Container* c){
	int mindex;
        for(int i = 0; i<c->size()-1;i++){
		mindex=i;
		for(int j=i; j<c->size();j++){
			if(c->at(j)->evaluate() < c->at(mindex)->evaluate()){
				mindex=j;
			}
		}
		c->swap(i,mindex);
	}
    }
};

#endif
