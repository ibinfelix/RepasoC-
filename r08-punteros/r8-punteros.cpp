void intercambiar1(int a, int b) {
    int t = a; a = b; b = t;           // no cambia nada afuera
}
void intercambiar2(int* a, int* b) {
    int t = *a; *a = *b; *b = t;       // se llama: (&x, &y)
}
void intercambiar3(int& a, int& b) {
    int t = a; a = b; b = t;           // se llama: (x, y)
}