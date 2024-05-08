#include <iostream>
#include "Node.h"


using namespace std;

// Constructor
Node::Node() {
  left = NULL;
  right = NULL;
  parent = NULL;
  color = 'R';
}

Node::Node(int newNum) {
  num = newNum;
  left = NULL;
  right = NULL;
  parent = NULL;
  color = 'R';
}

// Destructor
Node::~Node() {
  left = NULL;
  right = NULL;
  parent = NULL;
}

// Getters
Node* Node::getLeft() {
  return left;
}

Node* Node::getRight() {
  return right;
}

Node* Node::getParent() {
  return parent;
}

Node* Node::getUncle() {
  Node* grandparent = this->getParent()->getParent();
  if (grandparent->getNum() > this->getNum()) {
    return grandparent->getRight();
  }
  else if (grandparent->getNum() < this->getNum() || grandparent->getNum() == this->getNum()) {
    return grandparent->getLeft();
  }
  return NULL;
}

Node* Node::getSibling() {
  if (this == this->getParent()->getLeft()) {
    return this->getParent()->getRight();
  }
  else {
    return this->getParent()->getLeft();
  }
}

char Node::getColor() {
  return color;
}

int Node::getNum() {
  return num;
}

// Setters
void Node::setLeft(Node* n) {
  left = n;
}

void Node::setRight(Node* n) {
  right = n;
}

void Node::setParent(Node* n) {
  parent = n;
}

void Node::setColor(char c) {
  color = c;
}

void Node::setNum(int newNum) {
  num = newNum;
}
