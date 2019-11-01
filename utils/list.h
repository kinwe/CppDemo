//
// Created by xin hu on 2019/10/29.
//

#ifndef CPPDEMO_LIST_H
#define CPPDEMO_LIST_H

template <class T>
typedef struct Node {

public:

    T *data;

    Node *Next;

}; Node;

template <class T>
class Link {

private:

    Node<T> * headNode;

    Node<T> *tailNode;

    long int size;
public:
    Link(){};

    ~Link(){delete []headNode; delete []tailNode;}

    Link(Node<T> *headNode) : headNode(headNode) {}

    inline long int Size(){
        return size;
    }

    bool addNode(Node<T> *node){

        Node<T> * cur = new Node<T>;

        if(headNode != nullptr){
            cur->Next = headNode;
            headNode = cur;
            size++;
        } else{
            this->headNode = cur;
            size++;
        }

        return true;
    };

    bool append(Node<T> *node){
        Node<T> *cur = new Node<T>;
        if(headNode == nullptr){
            headNode = cur;
            tailNode = cur;
            size++;
        } else if(headNode != nullptr){
            tailNode->Next = cur;
            tailNode = tailNode->Next;
            size++;
        } else {
            return false;
        }
        return true;
    };

    bool isExprty(){
        return size > 0? true: false;
    }
};



#endif //CPPDEMO_LIST_H
