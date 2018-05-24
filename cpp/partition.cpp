#include <stdio.h>
 long PartionwithoutZero(int S, int K,int m) {
    long DP_Table[K][S];
    for (int i = 0; i < S; i++)
        DP_Table[0][i] = 1;
    for (int i = 1; i < K; i++)
        DP_Table[i][0] = 0;

    for (int i = 1; i < K; i++) {
        for (int j = 1; j <=m; j++)
            DP_Table[i][j] = DP_Table[i - 1][j - 1] + DP_Table[i][j - 1];
    }
	return DP_Table[K - 1][m ];
}
int main()
{
	int s=7,k=2;int m=3;
    long int r;
	r=(PartionwithoutZero(s, k,m));
	printf("%ld",r);
}
