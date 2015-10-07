#ifndef  CUBE_BASEFUNC_H
#define  CUBE_BASEFUNC_H

// pointer stack function
void * init_pointer_stack(int size);
void free_pointer_stack(void * stack);
int pointer_stack_push(void * pointer_stack,void * pointer);
void * pointer_stack_pop(void * pointer_stack);

void * init_pointer_queue(int size);
void free_pointer_queue(void * queue);
int pointer_queue_put(void * pointer_queue,void * pointer);
int pointer_queue_get(void * pointer_queue,void **pointer);

typedef struct uuid_head
{
	BYTE uuid[DIGEST_SIZE];
	int type;
	int subtype;
	char name[DIGEST_SIZE];
}__attribute__((packed)) UUID_HEAD;

void * init_hash_list(int order,int type,int subtype);
void * hashlist_get_desc(void * hashlist);
int hashlist_set_desc(void * hashlist,void * desc);
int  hashlist_add_elem(void * hashlist,void * elem);
void * hashlist_find_elem(void * hashlist,void * elem);
void * hashlist_remove_elem(void * hashlist,void * elem);
void * hashlist_get_first(void * hashlist);
void * hashlist_get_next(void * hashlist);


#endif
