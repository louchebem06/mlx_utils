/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_keycode.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 20:43:21 by bledda            #+#    #+#             */
/*   Updated: 2021/08/10 21:00:12 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MLX_KEYCODE_H
# define MLX_KEYCODE_H

# ifdef __linux__
#  define KEY_Q 0
#  define KEY_W 0
#  define KEY_E 0
#  define KEY_R 0
#  define KEY_T 0
#  define KEY_Y 0
#  define KEY_U 0
#  define KEY_I 0
#  define KEY_O 0
#  define KEY_P 0
#  define KEY_A 0
#  define KEY_S 0
#  define KEY_D 0
#  define KEY_F 0
#  define KEY_G 0
#  define KEY_H 0
#  define KEY_J 0
#  define KEY_K 0
#  define KEY_L 0
#  define KEY_Z 0
#  define KEY_X 0
#  define KEY_C 0
#  define KEY_V 0
#  define KEY_B 0
#  define KEY_N 0
#  define KEY_M 0
#  define KEY_ECHAP 0
#  define KEY_ENTER 0
#  define KEY_ARROW_LEFT 0
#  define KEY_ARROW_RIGHT 0
#  define KEY_ARROW_DOWN 0
#  define KEY_ARROW_UP 0
#  define KEY_DELETE 0
#  define KEY_0 0
#  define KEY_1 0
#  define KEY_2 0
#  define KEY_3 0
#  define KEY_4 0
#  define KEY_5 0
#  define KEY_6 0
#  define KEY_7 0
#  define KEY_8 0
#  define KEY_9 0
#  define KEY_TAB 0
#  define KEY_MAJ 0
#  define KEY_SHFT 0
#  define KEY_CTRL 0
#  define KEY_SPACE 0
# elif __APPLE__
#  define KEY_Q 12
#  define KEY_W 13
#  define KEY_E 14
#  define KEY_R 15
#  define KEY_T 17
#  define KEY_Y 16
#  define KEY_U 32
#  define KEY_I 34
#  define KEY_O 31
#  define KEY_P 35
#  define KEY_A 0
#  define KEY_S 1
#  define KEY_D 2
#  define KEY_F 3
#  define KEY_G 5
#  define KEY_H 4
#  define KEY_J 38
#  define KEY_K 40
#  define KEY_L 37
#  define KEY_Z 6
#  define KEY_X 7
#  define KEY_C 8
#  define KEY_V 9
#  define KEY_B 11
#  define KEY_N 45
#  define KEY_M 46
#  define KEY_ECHAP 53
#  define KEY_ENTER 36
#  define KEY_ARROW_LEFT 123
#  define KEY_ARROW_RIGHT 124
#  define KEY_ARROW_DOWN 125
#  define KEY_ARROW_UP 126
#  define KEY_DELETE 51
#  define KEY_0 29
#  define KEY_1 18
#  define KEY_2 19
#  define KEY_3 20
#  define KEY_4 21
#  define KEY_5 23
#  define KEY_6 22
#  define KEY_7 26
#  define KEY_8 28
#  define KEY_9 25
#  define KEY_TAB 48
#  define KEY_MAJ 272
#  define KEY_SHFT 257
#  define KEY_CTRL 256
#  define KEY_SPACE 49
# endif

#endif