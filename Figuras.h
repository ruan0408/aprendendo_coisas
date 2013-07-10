#ifndef FIGURAS_H_INCLUDED
#define FIGURAS_H_INCLUDED

enum{RET, TRI, CIRC};

struct retangulo
{
    float b;
    float h;
};

struct triangulo
{
    float b;
    float h;
};

struct circulo
{
    float r;
};

typedef struct retangulo Retangulo;
typedef struct triangulo Triangulo;
typedef struct circulo Circulo;

#endif /* FIGURAS_H_INCLUDED */
