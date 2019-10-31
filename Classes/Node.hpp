//
// Created by Genesis on 10/28/2019.
//

#ifndef GRAPHDB_NODE_HPP
#define GRAPHDB_NODE_HPP
#include <string>
#include "list"
using namespace std;
template <class N >

class Node {

private:
    string key;
    N value;
    list<const Node*> adjList;
    Node createNode(const string& ke, const N& val){
        this->key = ke;
        this->value = val;
    }
public:
    Node(){
        this->key = NULL;
        this->value = NULL;
    }
    Node(const string& key, const N& value){
        this->key = key;
        this->value = value;
    }


    string getKey(){
        return this->key;
    }

    N getValue(){
        return this->value;
    }

    void addToList(Node* node){
        adjList.push_back(node);
    }

    list<const Node*> getList(){
        return adjList;
    }
};

#endif //GRAPHDB_NODE_HPP
