#include <stdio.h>

void usage()
{
    printf("+++++++++++++++++++++++++++++++++++++++++++\n");
    printf("--Filename rename program--\n");
    printf("Please check comand line argment\n");
    printf("\n");
    printf(".exe Inputfilename Outputfilename\n");
    printf("+++++++++++++++++++++++++++++++++++++++++++\n");

}

int main(int argc, char** argv) 
{
    if(3 > argc)
    {
        usage();
        return 0;
    }
    
    char* iFilename = argv[1];
    char* oFilename = argv[2];
    
    FILE *fp = fopen(iFilename, "r");

    if(NULL == fp)
        printf("%s is not found.\n", iFilename);

    if(0 == rename(iFilename, oFilename))
        printf("Successfully renamed file.\n");
    else
        printf("Failed to rename %s to %s.\n");

    return 0;
}

