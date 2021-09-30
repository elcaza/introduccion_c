#ifdef WIN32
#define TIPO_USUARIO "Windows"
#elif defined __unix__
#define TIPO_USUARIO "UNIX"
#else
#define TIPO_USUARIO "???"
#endif
void imprime();