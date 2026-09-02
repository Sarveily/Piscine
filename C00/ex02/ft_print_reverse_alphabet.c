 /*                                                                            */
 /*                                                        :::      ::::::::   */
 /*   ft_print_reverse_alphabet.c                                :+:      :+:    :+:   */
 /*                                                    +:+ +:+         +:+     */
 /*   By: sarve <sarve@student.42.fr>                +#+  +:+       +#+        */
 /*                                                +#+#+#+#+#+   +#+           */
 /*   Created: 2026/08/31 14:20:00 by sarve             #+#    #+#             */
 /*   Updated: 2026/09/01 12:48:02 by sarve            ###   ########.fr       */
 /*                                                                            */
 /* ************************************************************************** */
  #include <unistd.h>

  void>---ft_print_reverse_alphabet(void)
  {
  >---char>---i;

  >---i = 'z';
  >---while (i >= 'a')
  >---{
  			write (1,&i,1);
  >--->---i--;
  >---}
  }
