#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define BLOCK_SIZE 4096
int main()
{
	/* code */
	int fd = -1;
	ssize_t bytes_read = -1;
	int i = 0;
	char buffer[100];

	fd = open("/home/omar/regex.txt", O_RDONLY);
	if ( -1 == fd){
		printf("Error file not found\n");
		return -1;
	}

	while ((bytes_read=read(fd,buffer,BLOCK_SIZE)) > 0){
		printf("bytes_read: %ld\n", bytes_read);
	}

	while (buffer[i] != '\0'){
		printf("buff[%d]=%s\n",i,buffer);
		i++;
	}

	close(fd);
	return 0;
}