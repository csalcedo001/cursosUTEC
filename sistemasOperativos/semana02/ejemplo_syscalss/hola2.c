#include<unistd.h>

int main(int argc,char *argv[])
{
char hello[] = "hello world\n";
char *p;

for (p=hello; *p;p++)
{write(1,p,1);
}

}
