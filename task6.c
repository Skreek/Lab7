char* insert(const char* src, const char* str, int index)
{
	unsigned int strLen = strlen(str);
	unsigned int srcLen = strlen(src);

	char* newstr = (char*)malloc((strLen + srcLen + 1), sizeof(char));

	char* curStr = newstr;
	char* p = src + index;
	for (const char* curSrc = src;
		*curSrc;
		++curSrc, ++curStr)
	{
		*curStr = *curSrc;

		if (curSrc == p)
		{
			for (const char* curSrc = str;
				*curSrc;
				++curSrc, ++curStr)
			{
				*curStr = *curSrc;
			}
			curStr -= 1;
		}

	}
	*curStr = 0;
	return newstr;
}