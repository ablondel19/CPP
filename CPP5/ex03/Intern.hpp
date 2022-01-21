/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:56:37 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/21 21:10:34 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class	Intern: public virtual Form
{
	private:
		/* data */
	protected:
		/* data */
	public:
		Intern();
		Intern( const Intern &obj );
		Intern &operator=( const Intern &obj );
		~Intern();
		Form *makeForm(std::string formName, std::string target);
};

#endif