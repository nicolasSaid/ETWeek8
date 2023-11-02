#include <stdio.h>
#include <iostream>

using namespace std;

//Practice! 
//Try and implement the resize function in the following class without any memory leaks! (and try addElement/removeElement if we have time!)
//Also, try to think: What would the time complexity of each of these operations be?

class dynamicArrays{
    public:
        dynamicArrays(){
            //what would happen if I initialzed capacity to 0?
            arr = new int[1];
            capacity = 1;
            size = 0;
        }
        //try to implement! Hint: when resizing, try to double the **capacity** of the array each time! (size is the number of elements!)
        void resize(){

        }
        //try to implement! Hint: this function should insert a value at the end of a list
        void addElement(int v){

        }
        //try to remove a specific element with value v! 
        bool removeElement(int v){

        }
    private:
        int capacity;
        int size;
        int* arr;
};