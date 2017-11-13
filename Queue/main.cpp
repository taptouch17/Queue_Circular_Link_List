//
//  main.cpp
//  Queue
//
//  Created by Jelani on 13/11/2017.
//  Copyright © 2017 Tap. TOUCH. All rights reserved.
//


#include <iostream>
#include "CircularLinkList.h"
#include "Queue.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    CircularList list;
    Queue Q;
    //list.createANode(3);
    //cout << list.size() << endl;
    //list.addAtFront(2);
    //cout << list.size() << endl;
    //list.addAtFront(4);
    //cout << list.size() << endl;
    //list.addAtBack(7, 3);
    //cout << list.size() << endl;
    Q.enqueue(5);
    //cout << Q.size() << endl;
    Q.enqueue(75);
    Q.enqueue(45);
    Q.displayQueue();
    cout << Q.size() << endl;
    Q.dequeue();
    cout << Q.size() << endl;
    Q.displayQueue();
    //list.deleteEnd();
    //list.displayList();
    
    return 0;
}
