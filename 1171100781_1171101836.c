/*

Name: Faretz Emir Imran Bin Rizal Imran
ID: 1171100781
Major: CE

Name: Lau Zhan Wei
ID: 1171101836
Major: CE

Question No. 2

*/

#include <stdio.h>
#include <stdlib.h>

struct Tree{

	char data;
	struct Tree *left;
	struct Tree *right;

};

struct Tree *addNode(char data);
void growTree(void);
void postorder(struct Tree *);
struct Tree *root, *parent1, *parent2;

int main(){

	growTree();
	printf("\nPostorder transversal: \t");
	postorder(root);
	printf("\n");


	return 0;

}

struct Tree *addNode(char data){

	struct Tree *temp;
	temp = (struct Tree *)malloc(sizeof(struct Tree));
	temp -> data = data;
	temp -> left = NULL;
	temp -> right = NULL;

	return temp;

}

void growTree(void){

	root = addNode('A');
	root -> left = addNode('B');
	root -> right = addNode('G');
	
	parent1 = root -> left;
	parent1 -> left = addNode('C');
	parent1 -> right = addNode('D');
	
	parent2 = parent1 -> right;
	parent2 -> left = addNode('E');
	parent2 -> right = addNode('F');

	parent1 = root -> right;
	parent1 -> left = addNode('H');
	parent1 -> right = addNode('J');

	parent2 = parent1 -> right;
	parent2 -> left = addNode('I');
	parent2 -> right = addNode('K');

	return;

}

void postorder(struct Tree *node){

	if(node){

		postorder(node -> left);
		postorder(node -> right);
		printf("%c ", node -> data);
	}

}
