//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//#define memeset(arr,a) memset(arr,a,sizeof arr);
//#define inf 1000000000000000
//string a,b;
//struct node
//{
//    char data;
//    struct node *left;
//    struct node *right;
//};
//ll pos;
//
//void postorder(struct node *root)
//{
//    if(root==NULL)
//        return ;
//    postorder(root->left);
//    postorder(root->right);
//    cout<<root->data;
//}
//
//node* tree_construct(ll start,ll ends)
//{
//    if(start>ends)
//        return NULL;
//    node *temp=(struct node*) malloc(sizeof(struct node));
//    temp->data= a[pos++];
//    // cout<<temp->data<<endl;
//    ll rt_index;
//    for(ll i=start; i<=ends; i++)
//    {
//        if(temp->data==b[i])
//        {
//            rt_index=i;
//        }
//
//    }
//    // cout<<rt_index<<endl;
//    temp->left=tree_construct(start,rt_index-1);
//    temp->right=tree_construct(rt_index+1,ends);
//    //cout<<temp->data<<endl;
//    return temp;
//
//}
//int main()
//{
//    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//
//    while(cin>>a>>b)
//    {
//        pos =0;
//        struct node *root=tree_construct(0,a.size()-1);
//        postorder(root);
//        cout<<endl;
//    }
//
//    return 0;
//}
//
/////DBACEGF ABCDEFG
/////BCAD CBAD
//
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;
#define MAX_CHARS 53
char preo[MAX_CHARS], ino[MAX_CHARS];

struct Node{
    char key;
    Node *left;
    Node *right;
    Node(){
        this->key = key;
        left = NULL;
        right = NULL;
    }

};
int find(char ch, int lo, int hi, char * s){
    for(int i = lo; i <= hi; i++)
        if(s[i] == ch) return i;
}
void build(Node* root, int prelo, int prehi, int inlo, int inhi){
    char key = preo[prelo];
    int rpos = find(key, inlo, inhi, ino);
    root->key = key;

    int lsubs = rpos - inlo;;
    if(inlo < rpos){
            Node * lson = new Node;
            root->left = lson;
            build( lson, prelo+1, prelo+lsubs, inlo, rpos-1);

    }
    if(rpos < inhi){
        Node * rson = new Node;
        root->right = rson;
        build(rson, prelo+lsubs + 1, prehi, rpos+1, inhi);
    }
}

void postorder(Node * root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%c", root->key);

}

void clear(Node* root){
    if(root == NULL) return;
    clear(root->left);
    clear(root->right);
    delete root;
}
int main()
{

    int test, nodes;
    //freopen("input.txt", "r", stdin);
    Node* root;
    scanf("%d", &test);
    while(test--){
        scanf("%d %s %s",&nodes, preo, ino);
        root = new Node;
        build(root, 0, nodes-1, 0, nodes-1);
        postorder(root);puts("");
        clear(root);
    }
    return 0;
}
