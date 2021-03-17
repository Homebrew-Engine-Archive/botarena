#pragma once

#define N 624

class CORE_EXPORT CMTRNG
{
public:
	CMTRNG(unsigned long s);							/* initializes mt[N] with a seed */
	CMTRNG(unsigned long init_key[], int key_length);	/* initializes mt[N] with a seed */

	unsigned long genrand_int32(void);	/* generates a random number on [0,0xffffffff]-interval */
	long genrand_int31(void);			/* generates a random number on [0,0x7fffffff]-interval */
	double genrand_real1(void);			/* generates a random number on [0,1]-real-interval */
	double genrand_real2(void);			/* generates a random number on [0,1)-real-interval */
	double genrand_real3(void);			/* generates a random number on (0,1)-real-interval */
	double genrand_res53(void);			/* generates a random number on [0,1) with 53-bit resolution*/

protected:
    void init_genrand(unsigned long s);								/* initializes mt[N] with a seed */
	void init_by_array(unsigned long init_key[], int key_length);	/* initialize by an array with array-length */
																	/* init_key is the array for initializing keys */
																	/* key_length is its length */


	unsigned long mt[N];			/* the array for the state vector  */
	int mti;						/* mti==N+1 means mt[N] is not initialized */
	unsigned long mag01[2];
};
