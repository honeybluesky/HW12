#include <stdio.h>
#include "lc4_memory.h"


/* 
 * adds a new node to the end of a linked list pointed to by head 
 */

 //return 0 if fail, 1 if sucess
int add_to_list (row_of_memory** head, 
		 short unsigned int address, 
		 short unsigned int contents) 
{

	/* allocate memory for a single node */


	/* populate fields in newly allocated node w/ address&contents */

	/* if head==NULL, node created is the new head of the list! */

	/* otherwise, traverse linked list until we reach the end */

	/* add node to the end of list */

	/* return 0 for success, -1 if malloc fails */


//local vairable for storing current pointer
	struct_of_ints* current = head_node;

//if the list is empty, it's the same as add to top
	if(current == NULL){
		head_node = add_to_top(current,value);
	
		}

//go to the end of the list
		while(current->next){
			current = current->next;
		}

//reserve space for new node
		struct_of_ints* new = malloc (sizeof(struct_of_ints)) ;

//check if succeed
		if (new == NULL) return NULL ;

//update the link connections
		new->value = value;
    new->next= NULL;
		current->next = new ;		

	return head_node ;



	return 0 ;
}


/* 
 * search linked list by address field, returns node if found 
 */
row_of_memory* search_address (row_of_memory* head, 
			       short unsigned int address ) 
{
	/* traverse linked list, searching each node for "address"  */

	/* return pointer to node in the list if item is found */

	/* return NULL if list is empty or if "address" isn't found */


		// keep searching if the link is not over
	  

	  while (head_node != NULL){

	  		// return the node if found
        if(head_node ->value == opcode) {
        				return head_node ;
        	}
        //update the pointer
        head_node = head_node ->next;
    }

    return head_node;

    if(head_node == NULL){
		return NULL;
	}
}


/* 
 * search linked list by opcode field, returns node if found 
 */
row_of_memory* search_opcode  (row_of_memory* head, 
				      short unsigned int opcode  ) 
{
	/* traverse linked list until node is found with matching opcode
	   AND "assembly" field of node is empty */

	/* return pointer to node in the list if item is found */

	/* return NULL if list is empty or if no matching nodes */

	// if the link is empty

	
		// keep searching if the link is not over
	  while (head_node != NULL){

	  		// return the node if found
        if(head_node ->value == opcode) {
        				return head_node ;
        	}
        //update the pointer
        head_node = head_node ->next;
    }

    return head_node;

    if(head_node == NULL){
		return NULL;
	}

}


void print_list (row_of_memory* head ) 
{
	/* make sure head isn't NULL */

	/* print out a header */

	/* traverse linked list, print contents of each node */	


	int i = 0 ;

	if(head_node == NULL){
		printf ("\t empyt list" );
	}

	while(head_node != NULL){

		printf ("\tlist[%d]=%d \n", i, head_node->value );
		head_node = head_node->next;
		i++;
	}

}

/* 
 * delete entire linked list
 */
int delete_list    (row_of_memory** head ) 
{
	/* delete entire list node by node */
	/* if no errors, set head = NULL upon deletion */

	/* return 0 if no error, -1 for any errors that may arise */

	struct_of_ints * current;

	//detle the node while the current node is not NULL
	while(head_node != NULL){

		current = head_node;
		head_node = head_node->next;//update the pointer to point the next one
		free(current);

	return 0 ;
}
