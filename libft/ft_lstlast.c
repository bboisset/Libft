t_list *ft_lstlast(t_list *lst)
{
  t_list *last_lst;

  while (lst)
  {
    last_lst = lst;
    lst = lst->next;
  }
  return (last_lst);
}
