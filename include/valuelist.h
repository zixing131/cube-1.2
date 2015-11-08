#ifndef VALUELIST
#define VALUELIST

#include "struct_deal.h"

NAME2VALUE elem_type_valuelist_array[] =
{
	{"STRING",OS210_TYPE_STRING},
	{"UUID",OS210_TYPE_UUID},
	{"INT",OS210_TYPE_INT},
	{"ENUM",OS210_TYPE_ENUM},      // an 32-bit enum
	{"FLAG",OS210_TYPE_FLAG},
	{"TIME",OS210_TYPE_TIME},
	{"UCHAR",OS210_TYPE_UCHAR},
	{"USHORT",OS210_TYPE_USHORT},   // a 16-bit unsigned word
	{"LONGLONG",OS210_TYPE_LONGLONG}, // a 64-bit longlong integer
	{"BINDATA",OS210_TYPE_BINDATA},  // a sequence of octets with fixed size
	{"BITMAP",OS210_TYPE_BITMAP}, 
	{"HEXDATA",OS210_TYPE_HEXDATA},  
	{"BINARRAY",OS210_TYPE_BINARRAY},   
	{"UUIDARRAY",OS210_TYPE_UUIDARRAY},   
	{"DEFUUIDARRAY",OS210_TYPE_DEFUUIDARRAY},   
	{"DEFNAMELIST",OS210_TYPE_DEFNAMELIST},   
	{"BOOL",OS210_TYPE_BOOL},
	{"ESTRING",OS210_TYPE_ESTRING},
	{"JSONSTRING",OS210_TYPE_JSONSTRING},
	{"NODATA",OS210_TYPE_NODATA},
	{"DEFINE",OS210_TYPE_DEFINE},
	{"DEFSTR",OS210_TYPE_DEFSTR},
	{"DEFSTRARRAY",OS210_TYPE_DEFSTRARRAY},
	{"SUBSTRUCT",OS210_TYPE_ORGCHAIN},
        {"CHOICE",OS210_TYPE_CHOICE},
	{"TPM64",TPM_TYPE_UINT64},
	{"TPM32",TPM_TYPE_UINT32},
	{"TPM16",TPM_TYPE_UINT16},
	{"ENDDATA",OS210_TYPE_ENDDATA},
    	{NULL,0}
};


NAME2VALUE elem_attr_flaglist_array[] =
{
    {"INDEX",OS210_ELEM_FLAG_INDEX},
    {"KEY",OS210_ELEM_FLAG_KEY},
    {"DESC",OS210_ELEM_FLAG_DESC},
    {NULL,0}
};
#endif
