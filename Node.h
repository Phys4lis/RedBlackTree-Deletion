#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

class Node {
 public:
  // Constructor
  Node();
  Node(int);
  // Destructor
  ~Node();
  // Get the next node in the list
  Node* getLeft();
  Node* getRight();
  Node* getParent();
  Node* getUncle();
  char getColor();
  int getNum();
  // Set the next node in the list
  void setLeft(Node* n);
  void setRight(Node* n);
  void setParent(Node* n);
  void setColor(char c);
  void setNum(int newNum);
 private:
  // Variables
  int num;
  Node* left;
  Node* right;
  Node* parent;
  char color;
};
#endif
