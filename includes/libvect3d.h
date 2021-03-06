/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libvect3d.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 15:15:05 by vroussea          #+#    #+#             */
/*   Updated: 2017/02/08 15:44:23 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBVECT3D_H

# define LIBVECT3D_H

# define RAD 0.017453292519943

typedef struct		s_vect3d
{
	double			x;
	double			y;
	double			z;
}					t_vect3d;

t_vect3d			vect3d_rot_x(t_vect3d u, double ang);
t_vect3d			vect3d_rot_y(t_vect3d u, double ang);
t_vect3d			vect3d_rot_z(t_vect3d u, double ang);
t_vect3d			vect3d_rot(t_vect3d u, t_vect3d v, double ang);

t_vect3d			vect3d_add(t_vect3d u, t_vect3d v);
t_vect3d			vect3d_sub(t_vect3d u, t_vect3d v);
t_vect3d			vect3d_vect_prod(t_vect3d u, t_vect3d v);
t_vect3d			vect3d_mult_scal(t_vect3d u, double k);
t_vect3d			vect3d_div_scal(t_vect3d u, double k);
t_vect3d			vect3d_unit(t_vect3d u);
double				vect3d_scal_prod(t_vect3d u, t_vect3d v);
double				vect3d_ang(t_vect3d u, t_vect3d v);
double				vect3d_dist(t_vect3d u, t_vect3d v);
double				vect3d_norm(t_vect3d u);
t_vect3d			vect3d_fill(double x, double y, double z);
#endif
