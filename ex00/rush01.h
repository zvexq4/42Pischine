#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>

void	ft_put_error(void);
void	ft_init_grid(int grid[4][4]);
int		ft_parse_input(char *str, int views[16]);
int		ft_solve(int grid[4][4], int views[16], int pos);
void	ft_print_grid(int grid[4][4]);
int		ft_is_safe(int grid[4][4], int row, int col, int num);
int		ft_check_views(int grid[4][4], int views[16]);
#endif