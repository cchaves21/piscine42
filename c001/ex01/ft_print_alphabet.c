#include<stdio.h>

void ft_print_alphabet(void)
{
  char alphabet = 'a';
  
  while(alphabet <= 'z')
  {
    printf("%c",alphabet);
    alphabet ++;
  }
}

int main() {
  ft_print_alphabet();
  return 0;
}

