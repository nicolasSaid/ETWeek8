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
            //the resize function would never get past size 0
            arr = new int[1];
            capacity = 1;
            size = 0;
        }
        //try to implement! Hint: when resizing, try to double the **capacity** of the array each time! (size is the number of elements!)
        //O(N)
        void resize(){
            int* temp = new int[capacity*2];
            for(int i = 0; i < size; i++){
                temp[i] = arr[i];
            }
            capacity = capacity*2;
            delete[] arr;
            arr = temp;
        }
        //try to implement! Hint: this function should insert a value at the end of a list
        //O(N)
        void addElement(int v){
            if(size == capacity){
                resize();
            }
            arr[size] = v;
            size++;
        }
        //try to remove a specific element with value v! 
        //O(N)
        bool removeElement(int v){
            if(size == 0){
                return false;
            }
            for(int i = 0; i <size; i++){
                if(arr[i] == v){
                    arr[i] = arr[size-1];
                    size--;
                }
            }
            return true;
        }
    private:
        int capacity;
        int size;
        int* arr;
};