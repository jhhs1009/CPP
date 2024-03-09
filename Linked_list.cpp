#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // 리스트의 끝에 노드를 추가하는 함수
    void append(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
        }
        else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // 리스트의 모든 노드를 출력하는 함수
    void display() {
        Node* current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    // 리스트에서 특정 값을 가진 노드를 삭제하는 함수
    void remove(int value) {
        Node* current = head;
        Node* previous = nullptr;

        while (current && current->data != value) {
            previous = current;
            current = current->next;
        }

        if (!current) {
            std::cout << "Value not found in the list." << std::endl;
            return;
        }

        if (!previous) {
            head = current->next;
        }
        else {
            previous->next = current->next;
        }

        delete current;
    }

    // 소멸자: 동적으로 할당된 메모리 해제
    ~LinkedList() {
        Node* current = head;
        Node* nextNode;

        while (current) {
            nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }
};

int main() {
    LinkedList myList;

    myList.append(1);
    myList.append(2);
    myList.append(3);
    myList.display();

    myList.remove(2);
    myList.display();

    return 0;
}