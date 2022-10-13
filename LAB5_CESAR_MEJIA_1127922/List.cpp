#include "List.h"

void Lista::Add(int item)
{
	Node* nuevo_nodo = new Node();
	nuevo_nodo->data = item;
	nuevo_nodo->next = header;
	header = nuevo_nodo;
}

void Lista::Clear()
{
	header = nullptr;
}

int Lista::Count()
{
	int cant = 0;
	Node* aux = header;
	while (aux!=nullptr)
	{
		cant++;
		aux = aux->next;
	}
	return cant;
}

bool Lista::Contains(int item)
{
	bool si = false;
	Node* aux = header;
	while (aux!=nullptr)
	{
		if (item==aux->data)
		{
			si = true;
			return si;
		}
		aux = aux->next;
	}
	return si;
}

int Lista::IndexOf(int item)
{
	int aux = 0;
	Node* auxi = header;
	while (auxi!=nullptr)
	{
		if (auxi->data!=item)
		{
			aux++;
			auxi = auxi->next;
		}
		else
		{
			return aux;
		}

	}
}

void Lista::Insert(int index, int item)
{

	Node* aux = header;

	for (int i = 0; i < index-1; i++)
	{
		aux = aux->next;
		
	}
	aux->data = item;
}

int Lista::GetItem(int index)
{
	Node* aux = header;
	if (index>0)
	{
		for (int i = 0; i <= index-1; i++)
		{
			aux = aux->next;
		}
		return aux->data;
	}
	else
	{
		return aux->data;
	}
	return aux->data;
}

void Lista::SetItem(int index, int item)
{
	int i;
	Node* aux = header;
	for (i = 0; i < index; i++)
	{
		aux = aux->next;
	}
	aux->data = item;
}

int Lista::LastIndexOf(int item)
{
	Node* aux = header;
	int index = -1, contador=0;
	while (aux!=nullptr)
	{
		if (item==aux->data)
		{
			index = contador;
		}
		aux = aux->next;
		contador++;
	}
	return index;
}

void Lista::Remove(int item)
{
	Node* aux = header;
	Node* siguiente = nullptr;
	int contador = 0;

	while (aux!=nullptr)
	{
		if (item==aux->data)
		{
			siguiente = aux->next;
			aux = nullptr;
			contador++;
		}
		else
		{
			contador++;
			aux = aux->next;
		}
	}
	if (siguiente!=nullptr)
	{
		contador--;
		aux = header;
		while (contador-1 > 0)
		{
			aux = aux->next;
			contador--;
		}
		aux->next = siguiente;
	}
}

void Lista::RemoveAt(int index, int max)
{
	Node* aux = header;
	Node* siguiente = nullptr;
	int contador = 0;
	
	if (index==0)
	{
		header = header->next;
	}
	else if (max==index)
	{
		while (contador < index-1)
		{
			aux = aux->next;
			
			if (contador==index-2)
			{
				aux->next = nullptr; contador++;
			}
			else
			{
				contador++;
				
			}
	}
	}
	else if (index>0 && index<max)
	{
		while (contador <= index)
		{
			if (contador == index)
			{
				siguiente = aux->next;
				contador++;
			}
			else
			{
				aux = aux->next;
				contador++;
			}
		}aux = header;
		if (siguiente != nullptr)
		{
			contador = contador - 2;
			while (contador > 0)
			{
				aux = aux->next;
				contador--;
			}
		}
		aux->next = siguiente;
	}
}
