#include <stdio.h>
#include <string.h>

void add(char m[], char n[], int *m_len, int n_len)
{
  int i, k;
  int j = 0;
  for (i = 0; i < *m_len && i < n_len; i++)
  {
    k = m[i] + n[i] + j;
    m[i] = k % 10;
    j = k / 10;
  }
  for (; i < *m_len; i++)
  {
    k = m[i] + j;
    m[i] = k % 10;
    j = k / 10;
  }
  for (; i < n_len; i++)
  {
    k = n[i] + j;
    m[i] = k % 10;
    j = k / 10;
    (*m_len)++;
  }
  if (j)
  {
    m[i] = j;
    (*m_len)++;
  }
}
void mult(char n[], int m, int *len)
{
  int i, j, k;
  j = 0;
  for (i = 0; i < *len; i++)
  {
    k = n[i] * m + j;
    j = k / 10;
    n[i] = k % 10;
  }
  for (; j; j /= 10)
  {
    n[i] = j % 10;
    (*len)++;
  }
}
char div(char n[], int m, int len)
{
  int i, j;
  j = 0;
  for (i = len - 1; i >= 0; i--)
  {
    j = j % m;
    j *= 10;
    j += n[i];
  }
  return j % m;
}
int main()
{
  int base, d, i, j;
  char num[4][1024];
  int len[4];
  printf("Input the base and the number(separated by a space)(0 to exit):\n");
  scanf("%d", &base);
  while (base)
  {
    getchar();
    scanf("%s", num[0]);
    len[1] = strlen(num[0]);
    d = 0;
    for (i = 0; i < len[1]; i++)
    {
      num[1][len[1] - 1 - i] = num[0][i] - '0';
      d += num[1][len[1] - 1 - i];
      num[0][i] = 0;
      num[2][i] = 0;
    }
    num[0][0] = 1;
    len[0] = 1;
    len[2] = 1;
    for (i = 0; i < len[1]; i++)
    {
      for (j = 0; j < len[0]; j++) 
      {
        num[3][j] = num[0][j];
      }
      len[3] = len[0];
      mult(num[3], num[1][i], len + 3);
      add(num[2], num[3], len + 2, len[3]);
      mult(num[0], base, len);
    }
    if (div(num[2], d, len[2]))
    {
      printf("It is not a Niven number.\n");
    }
    else
      printf("It is a Niven number.\n");
    scanf("%d", &base);
  }
  return 0;
}