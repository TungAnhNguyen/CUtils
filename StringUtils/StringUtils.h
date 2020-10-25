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