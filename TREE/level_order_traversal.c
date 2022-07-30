#include<stdio.h>  
#include<stdlib.h>  
typedef struct node  
{  
    int data;  
    struct node *left;   
    struct node *right;   
    int height;
}nod;  
void insert();
void printCurrentLevel(nod* root, int level);
int height(nod* node);
void printLevelOrder(nod*);
nod* root=NULL;  
void printLevelOrder(nod* root)
{
    int h = height(root);
    int i;
    for (i = 1; i <= h; i++)
        printCurrentLevel(root, i);
}
int main()
{
	char ch;
		printf("\t\tWelcome To Tree Insertion Menu\n\n");
	do{
	insert();
	fflush(stdin);
	printf("\nEnter 'y' To Insert Again ");
	scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
	printLevelOrder(root);
}
void insert()
{
	nod* trav;
		nod* temp=malloc(sizeof(nod));
		printf("\nEnter Data: ");
		scanf("%d",&temp->data);
		temp->left=NULL;
		temp->right=NULL;
		if(root==NULL)
		root=temp;
		else
		{
			trav=root;
			while(1)
			{
			if(trav->data>temp->data)
			{
			    if(trav->left==NULL){
		        trav->left=temp;
		        return;
		    }
		        
		        trav=trav->left;
		    }
           else if(trav->data<temp->data)
           {
		     if(trav->right==NULL){
		    	trav->right=temp;
		    	return;
		    }
		    	trav=trav->right;
	    	}
		}
	}
}
void printCurrentLevel(nod* root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        printf("%d ", root->data);
    else if (level > 1) {
        printCurrentLevel(root->left, level - 1);
        printCurrentLevel(root->right, level - 1);
    }
}
int height(nod* node)
{
    if (node == NULL)
        return 0;
    else {
        int lheight = height(node->left);
        int rheight = height(node->right);
        if (lheight > rheight)
            return (lheight + 1);
        else
            return (rheight + 1);
    }
}

