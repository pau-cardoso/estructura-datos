#include <vector>
#include <iostream>
using namespace std;

/*
    Funcion para intercambiar la posicion de dos elementos
    @param v Direccion del vector a trabajar
    @param i indice de un elemento a intercambiar
    @param j indice del otro elemento a intercambiar
*/
template <class T>
void swap( vector<T> &v, int i, int j ){
    T temp = v[i];
    v[i] = v[j];
    v[j] = v[temp];
}


/*
    Ordenamiento de burbuja
    @param v direccion del vector a ordenar
    @return Nada pero modifica el vector y lo ordena
*/
template <class T>
void bubbleSort( vector<T> &v )
{
    cout << "entre al bubble sort" << endl;
    for ( int i = v.size() - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if ( v[j] > v[j+1] ){
                swap(v, j, j + 1);
            }
            
        }
    }
}

int main (){
    cout << "hola esto es una prueba" << endl;
    vector<int> vec;
    vec = {6,4,5,8,1,2};
    bubbleSort(vec);
    for (int i = 0; i < vec.size(); i++){
        if (i != 0){
            cout<< ", ";
        } 
        cout << vec[i] << ", ";
    }
    cout << endl;
    return 0;
}