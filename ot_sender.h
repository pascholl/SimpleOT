#ifndef OT_SENDER_H
#define OT_SENDER_H

#include <stdio.h>

#include "ge4x.h"
#include "sc25519.h"
#include "ot_config.h"

struct ot_sender
{
	unsigned char S_pack[ PACKBYTES ];
	sc25519 y;
	ge4x yS;
};

typedef struct ot_sender SIMPLEOT_SENDER;

void sender_genS(SIMPLEOT_SENDER *, unsigned char *);
void sender_keygen(SIMPLEOT_SENDER *, unsigned char *, unsigned char (*)[4][HASHBYTES]);

#endif //ifndef OT_SENDER_H

