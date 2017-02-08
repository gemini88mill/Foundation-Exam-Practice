//Binary Trees 
//By Raphael Miller

#include <stdio.h>
#include <stdlib.h>

struct treeNode{
	int data;
	struct treeNode* left;
	struct treeNode* right;
};

void init(struct treeNode* root);
struct treeNode* insert(int val, struct treeNode* root);
struct treeNode* search(int searchVal, struct treeNode* root);

int main(){
	struct treeNode* root = NULL;
	struct treeNode* current = NULL;
		
	
	current = root;
		
	current = insert(3, current);
	insert(45, current);
	
	struct treeNode* retval = search(3, current);
	printf("%d found", current->data);
	
	return 0;
}

void init(struct treeNode* root){
	root = malloc(sizeof(struct treeNode));
}

struct treeNode* insert(int val, struct treeNode* root){
	struct treeNode* current = malloc(sizeof(struct treeNode));
	
	if(root == NULL){
	
		//printf("current: %d, root %d\n", current->data, root->data);
	
		current = malloc(sizeof(struct treeNode));
		current->data = val;
		current->left = NULL;
		current->right = NULL;
		root = current;
		printf("current: %d, root %d\n", current->data, root->data);
		return current;
	}else{
		if(root->data < val){
			insert(val, current->left);
		}
		if(root->data >= val){
			insert(val, current->right);
		}
	}
	
}

struct treeNode* search(int searchVal, struct treeNode* root){
	struct treeNode* current = root;
	//printf("current: %d, root %d\n", current->data, root->data);
	if(current != NULL){
		if(searchVal == current->data){
			return current;
		}else if(searchVal < current->data){
			return search(searchVal, current->left);
		}else if(searchVal > current->data){
			return search(searchVal, current->right);
		}else{
			printf("Value not found");
			return NULL;
		}
	}
}




