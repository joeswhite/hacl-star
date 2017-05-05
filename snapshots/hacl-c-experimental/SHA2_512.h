/* This file was auto-generated by KreMLin! */
#ifndef __SHA2_512_H
#define __SHA2_512_H



#include "kremlib.h"
#include "testlib.h"

typedef uint8_t uint8_t;

typedef uint32_t uint32_t;

typedef uint64_t uint64_t;

typedef uint8_t huint8_t;

typedef uint32_t huint32_t;

typedef uint64_t huint64_t;

typedef uint8_t *huint8_p;

typedef uint32_t *huint32_p;

typedef uint64_t *huint64_p;

typedef uint8_t Hacl_Hash_SHA2_512_uint8_t;

typedef uint32_t Hacl_Hash_SHA2_512_uint32_t;

typedef uint64_t Hacl_Hash_SHA2_512_uint64_t;

typedef uint8_t Hacl_Hash_SHA2_512_uint8_ht;

typedef uint32_t Hacl_Hash_SHA2_512_uint32_ht;

typedef uint64_t Hacl_Hash_SHA2_512_uint64_ht;

typedef FStar_UInt128_t Hacl_Hash_SHA2_512_uint128_ht;

typedef uint64_t *Hacl_Hash_SHA2_512_uint64_p;

typedef uint8_t *Hacl_Hash_SHA2_512_uint8_p;

typedef struct {
  uint32_t fst;
  uint8_t *snd;
}
K___uint32_t_uint8_t_;

typedef uint8_t uint8_t0;

typedef uint32_t uint32_t0;

typedef uint64_t uint64_t0;

typedef uint8_t uint8_ht;

typedef uint32_t uint32_ht;

typedef uint64_t uint64_ht;

typedef FStar_UInt128_t uint128_ht;

typedef uint64_t *uint64_p;

typedef uint8_t *uint8_p;

extern uint32_t size_hash;

extern uint32_t size_block;

extern uint32_t size_state;

void init(uint64_t *state);

void update(uint64_t *state, uint8_t *data);

void update_multi(uint64_t *state, uint8_t *data, uint32_t n1);

void update_last(uint64_t *state, uint8_t *data, uint64_t len);

void finish(uint64_t *state, uint8_t *hash1);

void hash(uint8_t *hash1, uint8_t *input, uint32_t len);
#endif
