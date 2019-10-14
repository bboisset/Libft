void ft_lstadd_back(t_list **alst, t_list *new)
{
  t_list *last_lst;
  last_lst = ft_lstlast(alst);
  if (new)
    last_lst->next = new;
}
