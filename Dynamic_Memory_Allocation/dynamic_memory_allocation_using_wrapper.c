
//calloc using malloc and memset
void* calloc(unsigned long int nmem, unsigned long int size_per_member){

	void* p=NULL;
	p = malloc(nmem*size_per_member);
	memset(p,0,nmem*size_per_member);
	return(p);
}

//GNU -C Library documentation

//xmalloc - x is wrapper name, advantage - no need to check each time 
//error handling while doing malloc/calloc in the code, just call this 
//wrapper function

void* malloc(unsigned long int );

void* xmalloc(unsigned long int size_in_bytes){

	void* p =NULL;
	p=malloc(size_in_bytes);
	if(p==NULL){
		fprintf(stderr,"malloc:out of memory\n");
		exit(EXIT_FAILURE);
	}
	return(p);
}


void* xcalloc(unsigned long int number_of_members, unsigned long int size_per_member){

	void* p=NULL;
	p=calloc(number_of_members,size_per_member);
	if(p==NULL){
		fprintf(stderr,"calloc:out of memory\n");
		exit(EXIT_FAILURE);
	}
	return(p);
}
