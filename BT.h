#pragma once

namespace binTree_modul
{
	typedef char base;
	struct node 
	{
		base info;
		std::string code;
		int weight;
		node *parent;
		node *lt;
		node *rt;
		int i;//����� ���������� ���������� �������� ������
		int step;
			// constructor
			node () {lt = NULL; rt = NULL; code=' '; info=' ';}
	};
	struct diction
	{
		std::string code;
		base symv;
	};
	typedef node *binTree; // "�������������" ��������� ������
//-------------------------------------
	inline binTree Create(void);
	inline bool isNull(binTree);
	inline base RootBT (binTree); // ��� ��������� ���.������
	inline binTree Left1 (binTree);// ��� ��������� ���.������
	inline binTree Right1 (binTree);// ��� ��������� ���.������
	inline void destroy (binTree&);
	inline void UpTree(binTree b);

}