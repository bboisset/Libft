void ft_putstr_fd(char *s, int fd)
{
  write(fd, s, ft_strlen(s));
  write(fd, '\n', 1);
}