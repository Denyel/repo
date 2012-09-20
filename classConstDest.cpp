#include <iostream>

// Macros de erros
#define YOU_SHALL_NOT_PASS 1



using namespace std;

class fraction{
    // Atributos privados
    int denom, numer;
    bool sign;//true: negative
    double result;

    public:
        // Construtor sem paramtros
       forma de fração
        void show() const;
        // método que retorna o double result - método inline
        double getFraction() const {return this->result;}
};

// O const na frente da declaração simboliza que esse método pode ser chamado por
// objetos declarados como constantes.
void fraction::show() const{

    cout<<endl;
    //this-> é o mesmo que um ponteiro para o objeto que esta sendo tratado,
    // pode ser ocultado, mas prefiro deixar explicito para melhor organização e
    // sabermos quais sao os atributos do objeto.
    if(!this->sign)cout<<"-";
    cout<< this->numer <<"/"<<this->denom << endl;

}

fraction::fraction(){

    this->denom = 1;
    this->numer = 0;
    this->sign = false;
    this->result = 0;

}

fraction::fraction(const int& n, const int& d){

    // throw - o tratamento de exceções aprenderemos mais tarde. Para quem se interessar,
    // isso é um modo avançado do setjmp e longjmp do C.
    if(d==0)throw YOU_SHALL_NOT_PASS;
    this->denom = d;
    this->numer = n;
    if(d*n<0)this->sign=true;
    else this->sign=false;
    this->result = d/n;

}

