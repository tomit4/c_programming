#include <stdio.h>
#include <stdlib.h>

int mbcheck(const char *s);

int main(void)
{
	int mbc_1, mbc_2, mbc_3, mbc_4;
	mbc_1 = mbcheck("\x05\x87\x80\x36\xed\xaa");
	mbc_2 = mbcheck("\x20\xe4\x50\x88\x3f");
	mbc_3 = mbcheck("\xde\xad\xbe\xef");
	mbc_4 = mbcheck("\x8a\x60\x92\x74\x41");

	printf("(a) => %d\n", mbc_1);
	printf("(b) => %d\n", mbc_2);
	printf("(c) => %d\n", mbc_3);
	printf("(d) => %d\n", mbc_4);
	return 0;
}

int mbcheck(const char *s)
{
	int n;

	for (mblen(NULL, 0);; s += n) {
		if ((n = mblen(s, MB_CUR_MAX)) <= 0) {
			return n;
		}
	}
}
