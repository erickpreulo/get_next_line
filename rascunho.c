int     get_next_line(int fd, char **line)
{
    char buf[BUFFERSIZE + 1];
    int lido;
    static char *str_salva;

    printf("o get_next_line comecou\n");
    *line = 0;
    lido = 1;
    str_salva = malloc(1);
    str_salva[0] = '\0';
    while (lido > 0)
    {
        lido = read(fd, buf, BUFFERSIZE);
        buf[lido] = '\0';
        printf("[%d] - %s \n", lido, buf);
        str_salva = ft_strjoin(str_salva, buf);
        printf("STR_SALVA - %s \n", str_salva);

        // IF STR_SALVA TEM \N
            //BREAK


        // printf("o arquivo foi aberto");    
        // while (lido != '\n')
        // {
        //     printf("%s", &buf);
        //     x++;
        // }
        // if (buf[x] == '\0')
        //     break;
        // i++;
    }

    //*line = substring (str_salva, 0 at'e o \n) 
    //str_salva = substring(str_salva, '\n' + 1 at'e o fim)
    return (0);
}


1. bla bla bla bla bla bla bla bla bla
2. bla bla bla bla bla bla bla bla bla
3. 0011235 bla bla bla bla bla bla bla
4. END OF FILE

*line = 1. bla bla bla bla bla bla bla bla bla
str_salvo = 2. bla bla bla


*line = 2. bla bla bla bla bla bla bla bla bla
str_salvo = 3. 0011235 bla bla bla bla bla