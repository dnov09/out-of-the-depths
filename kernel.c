#define ADDRESS 0xB800;

void main(void)
{
    char *addr = (char *)ADDRESS;
    addr[0] = 'O';
    addr[1] = 'K';
    return;
}