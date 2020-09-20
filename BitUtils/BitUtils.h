

/**
 * get number of bits from int x in binary form
*/
int getBitLength(int x);

/**
 * get int form of: number of bits from a number, starting from the left.
*/
int getEndBits(int x, int countingFromEnd);

/**
 * get int form of: number of bits from a number, starting from the right.
*/
int getFrontBits(int x, int countingFromRight);

/**
 * create an integer, in which when converted to binary it only consists of bit ONE.
*/
int createBitFieldOne(int length);