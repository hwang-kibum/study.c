#include <stdio.h>
void mikado(int); //함수 선언



int main()
{
	int pooh = 2, bah = 5;

	printf("main()에 있는 pooh = %d, &pooh=%p\n", pooh, &pooh);
	printf("main()에 있는 bah = %d, &bah=%p\n", bah, &bah);

	mikado(pooh);

	return 0;
}

void mikado(int bah)
{
	int pooh = 10;
	printf("mikado()에 있는 pooh = %d, &pooh=%p\n", pooh, &pooh);
	printf("mikodo()에 있는 bah = %d, &bah=%p\n", bah, &bah);

}
