#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "LinearStack.h"
typedef double stackType;

#include <string.h>
using std::getline;
using std::string;


int main() {

    linearStack objDoubleStack;                                 //creo un objeto de tipo linearStack();
    
    int elementsNumber;
    double element;


    cout<<"How many elements do you want in the stack"<<endl;
        cin>>elementsNumber;                                    //leo el numero de elementos que el usuario quiere para esta pila


    for(int i=0; i<elementsNumber;i++){                         //inicio un for para llenar la pila el numero de veces que pidio el usuario
        cin>>element;                                           //leo el dato en el ciclo que esta corriendo
        objDoubleStack.push(element);                           //ese mismo dato lo mando al metodo push
    }

    //en esta parte se empieza a vaciar la pila
    cout<<"Elements Of The Stack"<<endl;

    while(!objDoubleStack.emptyStack()){                        //mientras el metodo emptyStack se distinto a true(que es lo que deve enviar) ejecutara lo siguiente

        element=objDoubleStack.pop();                           //la variable element va a tomar el valor de el metodo pop en cada ciclo que se ejecute el while

        if(element>0.0){                                        //si lo que hay en la variable element es un numero mayor a 0.0 osea positivo hara lo siguiente
            cout<<"Positive Element: ["<<element<<"] "<<endl;
        }

        else{                                                   //si no es mayor a 0.0 pues por logica el numero es negativo y hara lo siguiente
            cout<<"Negative Element: ["<<element<<"] "<<endl;
        }
    }
    return 0;
}

void linearStack::push(stackType element){                                                //aqui el metodo esta solicitan a la variable x que corresponde al numero que ingreso el usuario
    if(fullStack()){                                                                //si la funcion fullStack se cumple mostrara un error de que la pila esta desbordada
        throw "stack overflow";
    }

    //se incrementa el puntero que indica la cima de la pila en mi caso se llama top
    top++;                                                                          // si no se cumple la condicion anterior aumentara el apuntador del final de la lista para que la pila agrege un espacion de maner dinamica
    stackList[top]=element;                                                               //entonces en la lista en su indice [top] va a ser igual lo que hay en x que es el numero que el usuario ingreso
}

stackType linearStack::pop(){

    stackType aux;                                                                  //se declara una variable auxiliar
    if(emptyStack()){                                                               //si la funcion emptyStack() se cumple pues la pila esta vacia
        throw "the stack is empty, doesnt extract it.";                             //por lo tanto enviara un mensaje avisando que la lista esta vacia
    }
    //guarda elemento de la cima(top)
    aux=stackList[top];                                                             //entonces la variable auxiliar va a tomar el valor de la lista en su indice[top] esto hara que extraiga del ultimo valor ingresado al primero

    //decrementa cima(top) y devuelve el elemento extraido
    top--;                                                                          //aqui se decrementa el indice top
    return aux;                                                                     //y por ultimo retorna lo que hay en auxiliar

}

stackType linearStack::topStack(){

    if(emptyStack()){                                                               //si la funcion emptyStack se cumple() pues es un hecho que la pila esta vacia y por lo tanto top esta en su valor inicial
        throw "empty stack, there not elements.";                                   //se envia un mensaje avisando que no hay elementos
    }
    return stackList[top];                                                          //en dado que se haya o no cumplido la condicion, va a regresar el top de la lista
}

bool linearStack::emptyStack(){


        return top==-1;

}

bool linearStack::fullStack() {


        return top==stackSize-1;

}

void linearStack::clearStack() {

    top=-1;
}

/*struct Word{
    string wordToReverse;
    char wordReversed [50];

struct word *next;
} *first=NULL, *final=NULL, *aux=NULL, *previous=NULL;*/


/* int main(){


 aux = new Word;

 char auxiliarWord1[aux->wordToReverse.length()];
 char auxiliarWord2[0];

 cout << "which word you want to reverse?" << endl;
     getline(cin, aux->wordToReverse);



 for (int j = 0; j <= aux->wordToReverse.length(); j++) {

     auxiliarWord1[j] = aux->wordToReverse[j];
 }

 for (int j=aux->wordToReverse.length(); j<=0; j--){

     auxiliarWord2[j];

 }
 cout<<auxiliarWord1<<endl;
 return 0;

}*/
