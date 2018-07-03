/**
    ter funções que operam
    matrizes
*/

float **alocamatriz(int l, int c);

void freeMatriz(float **matriz,int l);
/*
float **multiplica(float **A, int la, int ca,
           float **B, int lb, int cb);

int multiplica(float **A, int la, int ca,
           float **B, int lb, int cb,
           float **C);
*/

/**

    1---    void multiplica(float **A, int la, int ca,
           float **B, int lb, int cb,
           float ***res);  //omg


    2----  float **multiplica(float **A, int la, int ca,
           float **B, int lb, int cb);


    3----  int multiplica(float **A, int la, int ca,
           float **B, int lb, int cb,
           float **C);
  */



           void multiplica(float **A, int la, int ca,
           float **B, int lb, int cb,
           float ***res)
