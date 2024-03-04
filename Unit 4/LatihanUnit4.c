#include <stdio.h>

int sisi;
int kel_per(int num);
int lu_per(int num);
int vol_kub(int num);

int main()
{
    int keliling, luas, volume;

    printf("Masukan panjang sebuah sisi : ");
    scanf("%d", &sisi);

    keliling = kel_per(sisi);
    luas = lu_per(sisi);
    volume = vol_kub(sisi);

    printf("Keliling persegi ketika sisi sepanjang %d: %d\n ", sisi, keliling);
    printf("Luas persegi ketika sisi sepanjang %d: %d\n ", sisi, luas);
    printf("Volume kubus ketika rusuk sepanjang %d: %d ", sisi, volume);

    return 0;
}

int kel_per(int num)
{
    return 4 * num;
}

int lu_per(int num)
{
    return num * num;
}

int vol_kub(int num)
{
    return num * num * num;
}