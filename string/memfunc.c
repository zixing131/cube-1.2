/**
 * Copyright [2015] Tianfu Ma (matianfu@gmail.com)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * File: buddy.c
 *
 * Created on: Jun 5, 2015
 * Author: Tianfu Ma (matianfu@gmail.com)
 */

#include "../include/errno.h"
#include "../include/data_type.h"
#include "../include/string.h"

void * Memcpy(void * dest,void * src, unsigned int count)
{
	if(dest == src)
		return src;
	char * d=(char *)dest;
	char * s=(char *)src;
	while(count-->0)
		*d++=*s++;
	return dest;
}

void * Memset(void * s,int c, int n)
{
	const unsigned char uc=c;
	unsigned char * su;
	for(su=s;n>0;++su,--n)
		*su=uc;
	return s;
}
