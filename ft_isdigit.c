int ft_isdigit(int ch)
{
    if (ch >= '0' && ch <= '9')
    {
        return (ch - 48);
    }
    else
        return 0;
}