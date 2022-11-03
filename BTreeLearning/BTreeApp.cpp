#include "BTree.h"
#include "BTree.cpp"

int main() {
	Node<int>* tree = nullptr;
	tree = tree->BTreeInsert(tree, 11);
	tree = tree->BTreeInsert(tree, 14);
	tree = tree->BTreeInsert(tree, 97);
	tree = tree->BTreeInsert(tree, 78);
	tree = tree->BTreeInsert(tree, 21);
	tree = tree->BTreeInsert(tree, 100);
	tree = tree->BTreeInsert(tree, 10);
	tree = tree->BTreeInsert(tree, 101);
	tree = tree->BTreeInsert(tree, 15);
	tree = tree->BTreeInsert(tree, 16);
	tree = tree->BTreeInsert(tree, 105);
	tree = tree->BTreeInsert(tree, 100);
	tree = tree->BTreeInsert(tree, 100);
	tree = tree->BTreeInsert(tree, 100);
	tree = tree->BTreeInsert(tree, 100);
	tree = tree->BTreeInsert(tree, 100);
	tree = tree->BTreeInsert(tree, 100);
	bool check = true;
	tree->deleteEntry(97, check);
	std::cout << ((check == true) ? "true" : "false") << std::endl;
	tree->printTree(tree);
	delete tree;
	tree = nullptr;
	return 0;
}