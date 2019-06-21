#include"rbtree.h"
#include<stdio.h>
#include<stdlib.h>

int rbtree_init(rbtree *t) {
  t->nil = malloc(sizeof(rbnode));
  if (!t->nil) return 0;
  t->nil->colour = BLACK;
  t->root = t->nil;
  return 1;
}

void _rbtree_print(rbtree *t, rbnode *x) {
  if (x == t->nil) return;
  _rbtree_print(t, x->left);
  printf("%d\n", x->key);
  _rbtree_print(t, x->right);
}

void rbtree_print(rbtree *t) {
  _rbtree_print(t, t->root);
}

rbnode *rbtree_search(rbtree *t, int key) {
  rbnode *x = t->root;
  while (x != t->nil && x->key != key) {
    if (key < x->key) x = x->left;
    else x = x->right;
  }
  return x;
}

rbnode *rbtree_begin(rbtree *t) {
  rbnode *x = t->root, *y = t->nil;
  while (x != t->nil) { y = x; x = x->left; }
  return y;
}

rbnode *rbtree_end(rbtree *t) {
  /* exercise! */
}

rbnode *rbtree_next(rbtree *t, rbnode *x) {
  if (x->right != t->nil) return rbtree_begin(t, x->right);
  while (x->parent != t->nil && x->parent->right == x)
    x = x->parent;
  return x->parent;
}

rbnode *rbtree_prev(rbtree *t, rbnode *x) {
  /* exercise! */
}

void left_rotate(rbtree *t, rbnode *x) {
  rbnode *y = x->right;
  x->right = y->left;
  if (x->right != nil) x->right->parent = x;
  y->parent = x->parent;
  if (x->parent == t->nil) t->root = y;
  else if (x == x->parent->left) x->parent->left = y;
  else x->parent->right = y;
  y->left = x;
  x->parent = y;
}

void right_rotate(rbtree *t, rbnode *x) {
  /* exercise! */
}

int rbtree_insert(rbtree *t, int key) {
  /* exercise! */
}


rbnode *rbtree_next(rbtree *t, rbnode *x) {

}


void _rbtree_free(rbtree *t, rbnode *x) {
  if (x == t->nil) return;
  _rbtree_free(t, x->left);
  _rbtree_free(t, x->right);
  free(x);
}

void rbtree_free(rbtree *t) {
  _rbtree_free(t, t->root);
  free(t->nil);
}



