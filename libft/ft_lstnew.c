typedef struct  s_list
{
  void  *content;
  struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content)
{
  t_list *new_list = malloc(sizeof(*new_list));
  if (!new_list)
    return (0);
  new_list->content = content;
  new_list->next = 0;
  return (new_list);
}
