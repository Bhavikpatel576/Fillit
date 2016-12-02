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
** 	see if tetrimino is a valid shape.
*/

int	is_valid(char *file, size_t file_buffer)
{
	size_t iter;
	int j;

	iter = 4;
	j = -1;
	//code will iterate through string 4 char, check for new line on 5th
	// char <-will do this 4 times and check for 2 new lines
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

int 	main(int argc, char **argv)
{
	int read_file_bytes;
	char *file_name;
	char *buf;
	int return_value;

	file_name = argv[argc - 1];
	if (argc != 2)
	{
		ft_putstr("wrong number of inputs: try again");
		return (0);
	}
	buf = read_information(file_name);
	return_value = is_valid(buf, 41);
	printf("%d\n", return_value);
}
