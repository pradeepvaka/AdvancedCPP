#pragma once
#include<iostream>
using namespace std;

template<class T>
class ring
{
private:
	int m_size;
	int m_pos = 0;
	T* m_values;
public:
	class iterator;
	ring(int size) : m_pos(0),m_size(size),m_values(NULL) {
		m_values = new T[size];
	}
	~ring() {
		delete[] m_values;
	}
	int size() {
		return m_size;
	}
	void add(T value) {
		m_values[m_pos] = value;
		m_pos++;
		if (m_pos == m_size) {
			m_pos = 0;
		}

	}
	T& get(int pos) {
		return m_values[pos];
	}

	iterator begin() {
		return iterator(0, *this);
	}
	iterator end() {
		return iterator(m_size, *this);
	}

};

template<class T>
	class ring<T>::iterator {
	private:
		int m_pos;
		ring& m_ring;
	public:
		iterator(int pos, ring& ring_ref) : m_pos(pos), m_ring(ring_ref){}


		void print() {
			cout << "Hello from the iterator" << endl;
		}

		iterator operator++(int) {
			iterator old = *this;
			++(*this);
			return old;
		}

		iterator& operator++() {
			++m_pos;
			return *this;
		}

		T& operator*() {
			return m_ring.get(m_pos);
		}

		bool operator==(const iterator& other) const {
			return m_pos == other.m_pos;
		}

		bool operator!=(const iterator& other) const {
			return !(*this == other);
		}

	};
