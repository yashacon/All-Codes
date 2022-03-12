#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define IOS ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
struct node 
{ 
    struct node* left; 
    struct node* right; 
    struct node* parent; 
    int leaf = 1; 
}; 
struct node* head = new node; 
  
void init(node* temp) 
{ 
    temp->left = NULL; 
    temp->right = NULL; 
    temp->parent = NULL; 
    temp->leaf = 1; 
} 
  
void update(node* root) 
{ 
    if (root->right && root->left) 
        root->leaf = root->right->leaf + root->left->leaf; 
    else if (root->left) 
        root->leaf = root->left->leaf; 
    else if (root->right) 
        root->leaf = root->right->leaf; 
  
    if (root->parent)  
        update(root->parent); 
} 
  
void insert(string num, int level, node* root) 
{ 
    if (level == -1) 
    { 
        update(root); 
        return; 
    } 
  
    int x = num[level] - '0'; 
    if (x == 1) 
    { 
        if (!root->right) 
        { 
            struct node* temp = new node; 
            init(temp); 
            root->right = temp; 
            temp->parent = root; 
        } 
  
        insert(num, level - 1, root->right); 
    } 
    else
    { 
  
        if (!root->left) 
        { 
            struct node* temp = new node; 
            init(temp); 
            root->left = temp; 
            temp->parent = root; 
        } 
  
        insert(num, level - 1, root->left); 
    } 
} 
void solveUtil(string num, string k, int level, 
               node* root, int& ans) 
{ 
    if (level == -1) 
        return; 
  
    if (num[level] == '1') 
    {
        if (k[level] == '1') 
        { 
            if (root->right) 
                ans += root->right->leaf; 
            if (root->left) 
                solveUtil(num, k, level - 1, root->left, ans); 
        } 
        else
        { 
            if (root->right) 
                solveUtil(num, k, level - 1, root->right, ans); 
        } 
  
    } 
    else
    { 
        if (k[level] == '0') 
        { 
            if (root->left) 
                solveUtil(num, k, level - 1, root->left, ans); 
        } 
        else
        { 
            if (root->left) 
                ans += root->left->leaf; 
            if (root->right) 
                solveUtil(num, k, level - 1, root->right, ans); 
        } 
    } 
} 
  
int solve(int a[], int n, int K) 
{ 
    int maxEle = K; 
    for (int i = 0; i < n; i++) 
        maxEle = max(maxEle, a[i]); 

    int height = (int)ceil(1.0 * log2(maxEle)) + 1; 
  
    string k = ""; 
  
    int temp = K; 
    for (int j = 0; j < height; j++) 
    { 
        k = k + char(temp % 2 + '0'); 
        temp /= 2; 
    } 
  
    string init = ""; 
    for (int i = 0; i < height; i++) 
        init += '0'; 
    insert(init, height - 1, head); 
  
    int ans = 0; 
    temp = 0; 
    for (int i = 0; i < n; i++) 
    { 
        string s = ""; 
        temp = (temp ^ a[i]); 
  
        for (int j = 0; j < height; j++) 
        { 
            s = s + char(temp % 2 + '0'); 
            temp = temp >> 1; 
        } 
  
        solveUtil(s, k, height - 1, head, ans); 
  
        insert(s, height - 1, head); 
    } 
  
    return ans; 
} 
void fun()
{
    init(head);
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout << ((n*(n+1))/2)-solve(a, n, x)<<endl;
    return;
}
int main()
{
    IOS
    #ifndef ONLINE_JUDGE
        if (fopen("input.txt", "r"))
        {
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
        }
    #endif
   
    ll t=1;
    //cin>>t;
    while(t--)
        fun();
    return 0;
}