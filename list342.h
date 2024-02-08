#ifndef LIST_342_
#define LIST_342_
#include<iostream>
#include<fstream>
using namespace std;
template <typename T>
class List342 {

public:

    //constructors
    List342();



    //destructors



    //getters


    //setters


    //functions
    bool BuildList(string file_name);
    bool Insert( T* obj );
    bool Remove(T target, T& result);
    bool Peek(T target, T& result) const;
    int Size() const;
    void DeleteList();
    bool Merge(List342& list1);

    //operator overloads
    //for +=, + , <<, == ,!=, =



private: 
    T object_type;














};
#endif LIST_342_





