#include <stdio.h>
#include <iostream>

using namespace std;

//Practice! 
//Try and take this linked list class and rewrite it as a templated class!

//Hint: you can define a template as: template <typename T>

class linkedlist{
    private:
        class Node{
            public:
                Node* next;
                int val;
                Node(){
                    next = nullptr;
                }
                Node(int v){
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
        int removeFromHead(){
            if(head == nullptr){
                return 0;
            }

            int ret = head->val;
            head = head->next;
            return ret;
        }
};