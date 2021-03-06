/**
 *    Copyright 2017 jmpews
 * 
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 * 
 *        http://www.apache.org/licenses/LICENSE-2.0
 * 
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */


#ifndef writer_h
#define writer_h

#include "hookzz.h"

typedef struct _ZzWriter {
    zpointer *codedata;
    zpointer base;
    zpointer pc;
    zuint size;
} ZzWriter;

ZzWriter *ZzWriterNewWriter(zpointer address);

void ZzWriterPutNearJump(ZzWriter *self, zsize offset);

void ZzWriterPutAbsJump(ZzWriter *self, zpointer target_addr);

void ZzWriterPutRetAbsJmp(ZzWriter *self, zpointer target_addr);

zsize ZzWriterNearJumpRangeSize();

zsize ZzWriterAbsJumpInstructionLength();

zsize ZzWriterNearJumpInstructionLength();

#endif
 