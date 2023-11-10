#include <stdio.h>
#include <iostream>

using namespace std;

//Practice! 
//Try and take this linked list class and rewrite it as a templated class!

//Hint: you can define a template as: template <typename T>
template <typename T>
class linkedlist{
    private:
        class Node{
            public:
                Node* next;
                T val;
                Node(){
                    next = nullptr;
                }
                Node(T v){
                    next = nullptr;
                    val = v;
                }
        };
    public:
        Node* head;
        linkedlist(){
            head = nullptr;
        }
        void insertToHead(int val){
            Node* newNode = new Node(val);
            if(head == nullptr){
                head = newNode;
                return;
            }
            newNode->next = head;
            head = newNode;
        }
        T removeFromHead(){
            if(head == nullptr){
                return T();
            }

            int ret = head->val;
            head = head->next;
            return ret;
        }
};