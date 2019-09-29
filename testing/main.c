#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>

#define CAPACITY 5
// STRUCTURES
typedef struct	node_list
{
	int n;
	struct node_list *next;
}				node;

// STACK
typedef struct	s_stack
{
	int *numbers;
	int size;
}				stack;

//QUEUE
typedef struct	s_queue
{
	int front;
	int *numbers;
	int size;
}				queue; // очередь

// BINARY TREE
typedef struct	s_tree
{
	int n;
	struct s_tree *left;
	struct s_tree *right;
}				tree;

// HASH TABLE
typedef struct	s_hash
{
	char symbol;
	float frequency;
	struct s_hash *left;
	struct s_hash *right;
}				hash;

// FUNCTIONS
int list_search(int n, tree *tree)
{
//	tree *ptr = tree;
	if (tree == NULL)
		return (0);
	else if (n < tree->n)
		return list_search(n, tree->left);
	else if (n > tree->n)
		return list_search(n, tree->right);
	else
		return (1);
}

int find_grade(int n)
{
	int a;
	
	a = 0;
	if (n == 0)
		return a++;
	else
	{
		a = find_grade(n / 10);
		return a;
	}
	return a;
}

void f(char *bar)
{
	char c[12];
	strncpy(c, bar, strlen(bar));
}

int main(int argc, char **argv)
{
	node *node1;
	node1 = malloc(sizeof(node));
	node1->n = 10;
	node1->next = NULL;

	printf("%p\n", &(node1->n));
	printf("%p\n", &(node1));
	printf("%p\n", &(node1->next));
	printf("%p\n", &(node1->next));
//	printf("%p\n", &(node1->next->next));

//	f(argv[1]);

//	int *arrInt;
//
//	arrInt = malloc(10 * sizeof(int));
//	for (int i = 0; i < 10; ++i) {
//		arrInt[i] = i;
//	}
//	for (int j = 20; j >= 0 ; --j) {
//		printf("%d\n", arrInt[j]);
//	}
//	// LISTS
//	node *begin_list;
//	node *begin_list1;
//	node *begin_list2;
//	node *begin_list3;
//
//	begin_list = malloc(sizeof(node));
//	begin_list1 = malloc(sizeof(node));
//	begin_list2 = malloc(sizeof(node));
//	begin_list3 = malloc(sizeof(node));
//
//	begin_list->n = 10;
//	begin_list1->n = 20;
//	begin_list2->n = 30;
//	begin_list3->n = 40;
//
//	begin_list->next = begin_list1;
//	begin_list1->next = begin_list2;
//	begin_list2->next = begin_list3;
//	begin_list3->next = NULL;
//
//	tree *tree1;
//	tree *tree2;
//	tree *tree3;
//	tree *tree4;
//	tree *tree5;
//
//	tree1 = malloc(sizeof(tree));
//	tree2 = malloc(sizeof(tree));
//	tree3 = malloc(sizeof(tree));
//	tree4 = malloc(sizeof(tree));
//	tree5 = malloc(sizeof(tree));
//
//	tree1->n = 100;
//	tree2->n = 200;
//	tree3->n = 50;
//	tree4->n = 10;
//	tree5->n = 2000;
//	tree1->right = tree2;
//	tree1->left = tree3;
//	tree3->left = tree4;
//	tree3->right = NULL;
//	tree1->right = tree2;
//
//	if (list_search(60, tree1))
//		printf("Yes, it is true!");
//	else
//		printf("Nope :(");
//
//	// STACK

printf("%d\n", find_grade(1000));

	return 0;
}