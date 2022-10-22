//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Form.h"
#include "AVL.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

Node * root;
int Size = 0;
void tree( Node * rt,int kl, TTreeView * TreeView1 ){
	 /*
		TreeView1->Items->Add(node,out_by_key(root,root->key));

	if (root->left != nullptr)
	 {
	   tree(node,rt->left,TreeView1);
	 }
	// node = TreeView1->Items->AddChild( node, rt->value) ;

	 if(root->right != nullptr )
	 {
		tree(node, rt->right,TreeView1);
	 }
	   */

	   if (rt == 0 ) return;
	   if (kl == -1)
	   {
			TreeView1->Items->AddFirst(NULL,rt->value);
	   }
	   else
		TreeView1->Items->AddChildFirst(TreeView1 -> Items -> Item[kl], rt->value);

		kl++;
		tree(rt->left,kl,TreeView1);
		tree(rt->right,kl,TreeView1);
		kl--;
}

void check (TStringGrid * StringGrid1) {
 for (int i = 0; i < 10; i++)
 {
   if (StringGrid1->Cells[1][i] == "")
   {
	 StringGrid1->Cells[1][i] = IntToStr(0);
   }
 }
}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	StringGrid1->Cells[1][0] = "Number";
	StringGrid1->Cells[2][0] = "Name";
	check(StringGrid1);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{

	for (int i = 1; i < 10; i++)
	{
		if  (StringGrid1->Cells[1][i] != '0')
		{
			Size++;
		}
	}

	root = new Node(StrToInt(StringGrid1->Cells[1][1]), StringGrid1->Cells[2][1]);

	for (int i = 2; i < Size + 1; i++)
	{
	  root = insert(root,StrToInt(StringGrid1->Cells[1][i]),StringGrid1->Cells[2][i]);
	}

	//TraversInOrder(root);
	TreeView1->Items->Clear();
	tree(root,-1,TreeView1);
	Size = 0;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	if (root == nullptr)
	ShowMessage("The Tree is clear");
	else ShowMessage(root->height - 1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	  tree(root,-1,TreeView1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::óäàëèòüClick(TObject *Sender)
{
 root = Delete(root,StrToInt(Edit1->Text));
 if(root == nullptr) ShowMessage("da");
 /*
 TraversInOrder(root);
 ShowMessage("!!!!!!");
 TraversPostOrder(root);
 ShowMessage("!!!!!!");
 TraversPreOrder(root);
 */
 TreeView1->Items->Clear();
 tree(root,-1,TreeView1);
}
//---------------------------------------------------------------------------

