/**
 * get length of string. Does NOT include the '\0' character
*/
int getStringLength(char *s);

/**
 * convert input string to lower case
*/
void toLowerCase(char * str);


/**
 * convert input string to upper case
*/
void toUpperCase(char * str);

/**
 * find the first found @param pattern in @param source
 * returns -1 if not found
*/
int stringIndex(char * source, char * pattern);

/**
 * trim trailing and beginning spaces in string source.
 * @return: the same param that has been trimmed left and right
 */
char *trim(char *source);

/**
 * turn all content char into ' '
 */
void clearString(char *source);

/**
 * turn a string into int
*/
int convertStringToInt(char *source);

int powerInt(const int base, const int exponent)