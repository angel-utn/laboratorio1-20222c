
bool esPrimo(int numero)
{
    int i, c=0;
    for(i=1; i<=numero; i++)
    {
        if (numero % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
