//---------------------------------------------------------------------------

#ifndef AVLH
#define AVLH
#include "Form.h"
//---------------------------------------------------------------------------

class Node {
public:
	int key;
	String value;
	int height;
	Node * left;
	Node * right;

	Node(int key,String name){
		this->key = key;
		this->value = name;
		left = right = nullptr;
		height = 1;
	}
};

int Heigh(Node * ptr)
	{
		if (ptr != nullptr) return ptr->height;
		else return 0;
	}
	int balanceFactor(Node * ptr)
	{
	  return (Heigh(ptr->right) - Heigh(ptr->left));
	}

	void fixHeight(Node * ptr)
	{
		int heightLeft  = Heigh(ptr->left);
		int heightRight = Heigh(ptr->right);
		ptr->height = ((heightLeft > heightRight ? heightLeft : heightRight) +1 );
	}

	Node * rotateToRight(Node * ptr)
	{
		Node * cur = ptr->left;
		ptr->left = cur->right;
		cur->right = ptr;
		fixHeight(ptr);
		fixHeight(cur);
		return cur;
	}

	Node *rotateToLeft(Node * ptr)
	{
		Node * cur = ptr->right;
		ptr->right = cur->left;
		cur->left = ptr;
		fixHeight(ptr);
		fixHeight(cur);
		return cur;
	}

	Node * balance (Node * ptr)
	{
		fixHeight(ptr);
		if(balanceFactor(ptr) == 2)
			{
				if (balanceFactor(ptr->right) < 0)
					{
						ptr->right = rotateToRight(ptr->right);
					}
				return rotateToLeft(ptr);
			}
		if   (balanceFactor(ptr) == -2)
			{
				if (balanceFactor(ptr->left) > 0)
					{
						ptr->left = rotateToLeft(ptr->left);
					}
					return rotateToRight(ptr);
			}
			return ptr;
	}

	Node * insert(Node * ptr, int key, String name)
	{/*
	   if (ptr == nullptr) ptr = new Node(key);
	   else if ( key < ptr->key ) insert(ptr->left,key);
	   else if (key > ptr->key) insert(ptr->right,key);
	   ptr = balance(ptr);
	   */
		if( ptr == nullptr ) return new Node(key,name);
		if( key < ptr->key ) ptr->left = insert(ptr->left,key, name);
		else ptr->right = insert(ptr->right,key, name);
		return balance(ptr);
	}

	Node * findMinNode(Node * ptr)
	{
		if (ptr->left == nullptr) return ptr;
		else findMinNode(ptr->left);
	}

	Node * deleteMinNode(Node * ptr)
	{
		if (ptr->left == nullptr) return ptr->right;
		ptr->left = deleteMinNode(ptr->left);
		return balance(ptr);
	}

	Node * Delete(Node * ptr, int key)
	{
		if( ptr == nullptr ) return nullptr;
		if( key < ptr->key )
		ptr->left = Delete(ptr->left,key);
		else if( key > ptr->key )
		ptr->right = Delete(ptr->right,key);
			else //  k == p->key
		{
			Node* cur   = ptr->left;
			Node* cur_2 = ptr->right;
			delete ptr;
			if( !cur_2 ) return cur_2; // return cur
			Node * minimum = findMinNode(cur_2);
			minimum->right = deleteMinNode(cur_2);
			minimum->left = cur;
			return balance(minimum);
		}
		return balance(ptr);
	}


	Node* remove(Node* p, int k) // удаление ключа k из дерева p
{
	if( !p ) return 0;
	if( k < p->key )
		p->left = remove(p->left,k);
	else if( k > p->key )
		p->right = remove(p->right,k);
else //  k == p->key
	{
		Node* q = p->left;
		Node* r = p->right;
		delete p;
		if( !r ) return q;
		Node* min = findMinNode(r);
		min->right = deleteMinNode(r);
		min->left = q;
		return balance(min);
	}
	return balance(p);
}

	String out_by_key(Node * root, int key)
	{
		if ( root == nullptr) return 228;
		if (root->key == key && root != nullptr) return root->value;
		if (key < root->key) out_by_key(root->left, key);
		if (key > root->key) out_by_key(root->right, key);
	}

	void Print(Node * root)
	{
		 ShowMessage(root->key);
		//cout<<root->key<<"\t";
	}

  void TraversPreOrder (Node * root)
  {
	Print(root);
	if (root->left) TraversPreOrder(root->left);
	if(root->right) TraversPreOrder(root->right);
  }

  void TraversInOrder(Node* root) // по возрастанию
  {
	if (root->left) TraversInOrder(root->left);
		Print(root);
	if(root->right) TraversInOrder(root->right);
  }

  void TraversPostOrder(Node * root)
  {
	  if (root->left) TraversPostOrder(root->left);
	  if(root->right) TraversPostOrder(root->right);
		Print(root);
  }

  Node * findMaxNode(Node * ptr)
	{
		if (ptr->right == nullptr) { return ptr;}
		else findMaxNode(ptr->right);

	}

#endif
