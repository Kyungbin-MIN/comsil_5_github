#ifndef __STACK__
#define __STACK__

#include "LinkedList.h"

/*
1. ���ø� Ŭ������ Ȯ���ؾ� ��
2. Stack �������� Delete �Լ��� �������ؾ� ��
����: first, current_size�� class�� ��� �����̱� ������
      this �����͸� ����Ͽ� �����;� ��
*/

template <class T>
class Stack : public LinkedList<T>{
	public:
		bool Delete(T &element){
			if(this->first == 0) return false;

			Node<T> *current = this->first;
			this->first = current->link;
			element = current->data;
			delete current;
			this->current_size--;

			return true;
		}
};

#endif
