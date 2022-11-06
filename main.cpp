#include <vector>
#include <iostream>
#include "BubbleSort.h"
//#include "InsertionSort.h"
//#include "MergeSort.h"

using namespace std;

int main (){
    vector<int> v = {6,4,5,8,1,2};
    bubbleSort(v);
    for (int i = 0; i < v.size(); i++){
        if (i != 0) cout<< ", ";
        cout << v[i] ;
    }
    cout<<"hola mundo" << endl;
    return 0;
}