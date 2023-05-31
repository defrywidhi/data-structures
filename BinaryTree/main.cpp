#include <iostream>
#include <string>
#include "BinaryTree.h"

using namespace std;

int main(int argc, char** argv) {
	
	BinaryTree bin;
	
	bin.insert(10);
	bin.insert(5);
	bin.insert(2);
	bin.insert(7);
	bin.insert(15);
	bin.insert(20);
	bin.insert(17);
	bin.insert(25);
	bin.insert(30);

	int vall;
    cout << "insert the value want to find: ";
    cin >> vall;

    Node* searchfind = bin.search(vall);

    if (searchfind == NULL) {
        cout << "value " << vall << " not found in binary tree" << endl;
    } else {
        cout << "value " << vall << " found in binary Tree" << endl;
    }
    
    
    bin.FindMax();

	return 0;
}