/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:38:49 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/19 19:31:00 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>

class	Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	protected:
		/* data */
	public:
		Bureaucrat();
		Bureaucrat( const std::string &name, int grade );
		Bureaucrat( const Bureaucrat &obj );
		Bureaucrat &operator=( const Bureaucrat &obj );
		~Bureaucrat();
		std::string getName( void ) const;
		int			getGrade( void ) const;
		void		promotion( void );
		void		demotion( void );
		
		class GradeTooHighException
		{
			public:
				GradeTooHighException() {}
				~GradeTooHighException() {}
		};
		class GradeTooLowException
		{
			public:
				GradeTooLowException() {}
				~GradeTooLowException() {}
		};
};

std::ostream	&operator<<( std::ostream &o, Bureaucrat const &obj );

#endif