#ifndef __STACK__
#define __STACK__

#include "LinkedList.h"

/*
1. 탬플릿 클래스로 확장해야 함
2. Stack 형식으로 Delete 함수를 재정의해야 함
주의: first, current_size는 class의 멤버 변수이기 때문에
      this 포인터를 사용하여 가져와야 함
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
