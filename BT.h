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
		int i;//Номер последнего считанного элемента дерева
		int step;
			// constructor
			node () {lt = NULL; rt = NULL; code=' '; info=' ';}
	};
	struct diction
	{
		std::string code;
		base symv;
	};
	typedef node *binTree; // "представитель" бинарного дерева
//-------------------------------------
	inline binTree Create(void);
	inline bool isNull(binTree);
	inline base RootBT (binTree); // для непустого бин.дерева
	inline binTree Left1 (binTree);// для непустого бин.дерева
	inline binTree Right1 (binTree);// для непустого бин.дерева
	inline void destroy (binTree&);
	inline void UpTree(binTree b);

}