#include "ft_btree.h"

int main()
{   
    t_btree *node;
    node = btree_create_node(" N ");
    node->left = btree_create_node(" L ");
    node->right = btree_create_node(" R ");
    node->left->left = btree_create_node(" LL ");
    node->left->right = btree_create_node(" LR ");
    node->right->left = btree_create_node(" RL ");
    node->right->right = btree_create_node(" RR ");
    btree_insert_data(&node, "R");
    return (0); 
}