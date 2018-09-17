#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int value;
    struct Node *leftChild,*rightChild;
};

struct Node* root = NULL;
struct Node* temp = NULL;
int leafcount =0;
int height=0,max=0,internalNode = 0,level=0,currentlevel=0;


void insert(struct Node* rootnode, struct Node* newnode)
{
    if(rootnode->value>newnode->value)
    {
        if(rootnode->leftChild==NULL)
        {
            rootnode->leftChild = newnode;
        }
        else
        {
            rootnode = rootnode->leftChild;
            insert(rootnode,newnode);
        }
    }
    else if(rootnode->value!=newnode->value)
    {
        if(rootnode->rightChild==NULL)
        {
            rootnode->rightChild=newnode;
        }
        else
        {
            rootnode = rootnode->rightChild;
            insert(rootnode,newnode);
        }
    }
}

void inorder(struct Node* rootnode)
{

    if(rootnode!=NULL)
    {

        inorder(rootnode->leftChild);

        printf("%d ",rootnode->value);

        inorder(rootnode->rightChild);

    }
}

void leafNodeCount(struct Node* rootnode)
{

    if(rootnode!=NULL)
    {
        if(rootnode->leftChild==NULL && rootnode->rightChild == NULL)
        {
            leafcount++;
        }


        leafNodeCount(rootnode->leftChild);


        leafNodeCount(rootnode->rightChild);

    }
}

void heightOfTree(struct Node* rootnode)
{

    if(rootnode!=NULL)
    {
        if(height>max)
        {
            max=height;
        }
        height+=1;
        heightOfTree(rootnode->leftChild);

        heightOfTree(rootnode->rightChild);
        height-=1;

    }
}

void FindLevelOfElement(struct Node* rootnode,int value){
    if(rootnode!=NULL){
           if(rootnode->value==value){
              level = currentlevel+1;
              return;
           } else{
               currentlevel +=1;
               FindLevelOfElement(rootnode->leftChild,value);

               FindLevelOfElement(rootnode->rightChild,value);
               currentlevel -=1;
             }
    }
}

void FindInternalNodes(struct Node* rootnode){
   if(rootnode!=NULL){
        if(rootnode->leftChild!=NULL || rootnode->rightChild!=NULL){
            internalNode++;
        }
       FindInternalNodes(rootnode->leftChild);
       FindInternalNodes(rootnode->rightChild);
   }
}
int main()
{

    int n,cnt,findingValue;
    scanf("%d",&n);
    root=(struct Node*)malloc(sizeof *root);
    root->leftChild = root->rightChild = NULL;
    scanf("%d",&root->value);
    for(cnt=1; cnt<n; cnt++)
    {
        temp=(struct Node*)malloc(sizeof *temp);
        scanf("%d",&temp->value);
        temp->leftChild = temp->rightChild = NULL;
        insert(root,temp);

    }
    printf("Enter the value to find the level : ");
    scanf("%d",&findingValue);
    printf("\n The traversal of the tree : ");
    inorder(root);
    FindInternalNodes(root);
    leafNodeCount(root);
    heightOfTree(root);
    FindLevelOfElement(root,findingValue);
    printf("\n LeafNode Count :  %d",leafcount);
    printf("\n Height : %d", max);
    printf("\n Internal Nodes : %d",internalNode);
    printf("\n Level of the %d element is level %d",findingValue,level);
    printf("\n Depth of the tree is %d",max+1);

}
