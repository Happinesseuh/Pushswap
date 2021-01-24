/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** get nbr
*/

int get_count(char const *str)
{
    int i = 0;

    while (str[i] > '9' || str[i] < '0' && str[i] != '\0')
        i++;

    return (i);
}

int my_isneg_char(int pos, char const *str)
{
    int i = get_count(str);

    if (i != 0 && str[i - 1] == '-')
        return (1);
    else
        return (0);
}

int check(int pos, char const *str)
{
    int i = get_count(str);
    int res = 0;
    int j = 0;

    while ((str[i] <= '9' && str[i] >= '0') && str[i] != '\0') {
        res = res * 10 + str[i] - '0';
        if (res > 2147483647 || res < -2147483647 || j > 10)
            return (84);
        j++;
        i++;
    }

    return (res);
}

int my_getnbr(char  const *str)
{
    int res = 0;
    int pos = get_count(str);

    res = check(pos, str);
    if (res == 84 || res == 0)
        return (84);
    if (my_isneg_char(pos, str) == 1)
        res *= -1;
    return (res);
}