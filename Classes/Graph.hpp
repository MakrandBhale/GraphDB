//
// Created by Genesis on 10/30/2019.
//

#ifndef GRAPHDB_GRAPH_HPP
#define GRAPHDB_GRAPH_HPP

#include "Node.hpp"
#include "Relation.hpp"
#include "list"

template <class datatype>
class Graph{

private:
    list<Node<datatype>> headNodeList;
public:
    Node<datatype> createNode(const string& key, datatype val){
        Node<datatype> node(key, val);
        headNodeList.push_back(node);
        return node;
    }

    void showList()
    {
        for(auto it = headNodeList.begin();it != headNodeList.end(); ++it){
            cout << it->getKey() <<'=' << it->getValue();
            cout << '\n';
        }
    }

    void connect(Node<datatype>* source, Node<datatype>* dest){
        source->addToList(dest);
    }

    Node<datatype>* getNodeByKey(const string& key){
        for(auto it = headNodeList.begin();it != headNodeList.end(); ++it){
            if(key == it->getKey())
                 return &(*it);
        }
        return NULL;
    }

    Node<datatype>* getNodeByValue(datatype val){
        for(auto it = headNodeList.begin();it != headNodeList.end(); ++it){
            if(val == it->getValue())
                return &(*it);
        }
        return NULL;
    }

    void getAdjacencyList(Node<datatype>* n){
        list<Node<datatype>> adjList = n->getList();
        for(auto it = adjList.begin(); it != adjList.end(); ++it){
            cout << it->getValue();
        }
    }
};

#endif //GRAPHDB_GRAPH_HPP
