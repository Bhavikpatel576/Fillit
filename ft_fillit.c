/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 19:16:26 by bpatel            #+#    #+#             */
/*   Updated: 2016/12/01 13:41:51 by bpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "libft.h"
#include "fillit.h"

#define BUF_SIZE 4000


/* 
 * allowed functions exit, open, close, write, read, malloc, free
*/

/*	Is_valid will read in the tetrimino and check to see if it is valid
**  if the information is valid return error prompt. 
*/

// ft_isvalid() Check to see if the tetrimino is valid
// 	ft_check_lines() Checks to see how many lines are passed through 
// ft_tetrimino() Optional function that will determine which tetrimino we are 
// 	working with. 


// ft_coordinates() will store the coordinate values of the pieces in a 2d array
// ft_isplacesafe() Checks to see if the placement of the piece is valid 
// ft_printboard() Create the board based off how many tetrimos there are 
// ft_solution() Recrusive backtracking that finds the solution. 
// ft_convert_to_char() convert tetriminos to capital letters based off sequence. 
// ft_print_solution() Will print out the solution 
 


/*
**	Read information from a fixed file called "valid_1"
*/

char 	*read_information(char* file_name)
{
	char buf[BUF_SIZE + 1];
	char *return_string;
	int  read_file;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
	int  bytes_read;

	read_file = open(file_name, O_RDWR);
	if (read_file == -1)
	{
		ft_putstr("Error:Something fucked up happend in your code");
		return (NULL);
	}
	bytes_read = read(read_file, buf, BUF_SIZE);
	//printf("%d\n", bytes_read);
	return_string = ft_strdup(buf);
	if (close(read_file == -1))
	{
		ft_putstr("close() error");
		return (NULL);
	}
	return (return_string);
}

/*	
**	Is_valid will read in the tetrimino and check to see if it is valid
**  if the information is valid return error prompt. Will count to see if a 4 x 4
** 	block has been passed through. Return true or false. Second step will be to 
** 	see if tetrimino is a valid shape. ****currently results in a false negative with single tets**
*/

int	is_valid(char *file, size_t file_buffer)
{
	size_t iter;
	int j;

	iter = 4;
	j = -1;
	while (file_buffer > iter)
	{
		while (j++ < 3)
		{
			if (file[iter] != '\n')
				return (0);
			iter += 5;
		}
		if (file[iter] != '\n' && file[iter + 1] != '\n')
			return (0);
		else
		{
			iter += 1;
			j = 0;
		}
	}
	return (1);
}

/*	Function will convert each new line char into a dot to determine
**	shape of the piece
*/

void	*convert_to_dot(char *string_tetrino)
{
	int i;

	i = 0;
	while (string_tetrino[i] != '\0')
	{
		if (string_tetrino[i] == '\n')
			string_tetrino[i] = ('.');
		i++;
	}
	return (string_tetrino);
}

int		validate_tetrino(char *string_shape)
{
	convert_to_dot(string_shape);
	if (ft_strcmp(ft_strctrim(string_shape), H_LINE) == 0)
		return (1);
	else
		return (0);
}

int 	main(int argc, char **argv)
{
	char *file_name;
	char *buf;
	//char **tetrimino_in_file;
	int return_value;


	file_name = argv[argc - 1];
	if (argc != 2)
	{
		ft_putstr("wrong number of inputs: try again");
		return (0);
	}
	buf = read_information(file_name);
	return_value = is_valid(buf, 41);  //need to calculate buff size
	// if (return_value == 0)
	// 	return (0);
	// else 
	//tetrimino_in_file = ft_tet_split(buf);
	printf("%s\n", (buf));
	printf("%d\n", ft_tit_count(buf));
}
