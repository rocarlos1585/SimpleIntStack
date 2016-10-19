//
// Created by robert on 10/18/16.
//

typedef char stackType;

const char stackSize=50;

class linearStack{

private:
    int top;
    stackType stackList[stackSize];

public:
    linearStack(){
        top=-1;        //condicion de pila vacia
    }
    //operaciones que modifican la pila
    void push(stackType);
    stackType pop();
    void clearStack();

    //operacion de acceso a la pila
    stackType topStack();

    //verificacin del estado de la pila
    bool emptyStack();
    bool fullStack();

};
#ifndef PALINDROMOCONLISTAENLAZADA_FULLSTACK_H
#define PALINDROMOCONLISTAENLAZADA_FULLSTACK_H

#endif //PALINDROMOCONLISTAENLAZADA_FULLSTACK_H
