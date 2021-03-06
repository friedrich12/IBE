#ifndef _BF_4_1_H_
#define _BF_4_1_H_

#include <pbc/pbc.h>
#include <gmp.h>
#include <stdio.h>
#include <string.h>
//#include "sha1.h"
#include <stdlib.h>
#include "utils.h"

void get_private_key(char* ID, pairing_t pairing, element_t s, element_t Sid);
void get_public_key(char* ID, pairing_t pairing, element_t Qid);
void encryption(char* shamessage, char* ID, element_t P, element_t Ppub,
                element_t U, char* V, pairing_t pairing);
void decryption(element_t Sid, pairing_t pairing, element_t U, char* V,
                char* xor_result_receiver);
void setup_sys(int rbits, int qbits, element_t P, element_t Ppub,
               pairing_t pairing, element_t s);

#endif
