#include<stdio.h>
#include<stdlib.h>

static inline char *get_filename_extension( char *filename )
{
    char *ext = filename + strlen( filename );
    while( *ext != '.' && ext > filename )
        ext--;
    printf("###ext is [%s] \n",ext);  //���ʱ���� .264 
    //== �����ȼ�������+=  
    ext += *ext == '.';
    return ext;  //���ʱ����264 
}

int main()
{
    char * filename="zhangbin.264";
    printf("DO GET EXTENSION [%s] \n",get_filename_extension(filename));
    system("pause");

    return 0;
}
