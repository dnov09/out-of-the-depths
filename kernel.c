#define ADDRESS 0xB8000;

void main(void)
{
    char *addr = (char *)ADDRESS;
    addr[0] = 'O';
    addr[1] = 0xA;
    addr[2] = 'K';
    addr[3] = 0xD;

    for(;;);
    return;
}