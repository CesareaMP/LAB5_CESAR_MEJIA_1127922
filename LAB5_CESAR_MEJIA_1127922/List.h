#pragma once
struct Node
{
	int data;
	Node* next;
};
class Lista
{
private:
	Node* header = nullptr;
public:
	void Add(int item);
	void Clear();
	int Count();
	bool Contains(int item);
	int IndexOf(int item);
	void Insert(int index, int item);
	int GetItem(int index);
	void SetItem(int index, int item);
	int LastIndexOf(int item);
	void Remove(int item);
	void RemoveAt(int index, int max);
};

