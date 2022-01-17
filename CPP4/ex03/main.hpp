/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 19:06:45 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/17 23:52:54 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP
#include <iostream>
#include <string>

class	AMateria: virtual public ICharacter
{
	private:
		std::string _type;
	protected:
		
	public:
		AMateria(); // AMateria constructor
		AMateria( std::string const & type ); // Parametric constructor
		AMateria( const AMateria &obj ); // Basic copy constructor
		AMateria &operator=( const AMateria &obj ); // Assignation AMateria obj
		std::string const & getType() const; // Returns the materia type
		~AMateria(); // AMateria destructor
		virtual AMateria* clone() const = 0; // Returns an instance of the real Materia's type
		virtual void use( ICharacter& target );
};

class	Ice: virtual public AMateria
{
	private:
		std::string _type;
	protected:
		/* data */
	public:
		Ice() : _type("ice") {
			std::cout << "Ice default destructor" << std::endl;
		};
		
		Ice( const Ice &obj ) {
			std::cout << "Ice default copy constructor" << std::endl;
			*this = obj;
		};
		
		Ice &operator=( const Ice &obj ) {
			std::cout << "Ice default copy constructor" << std::endl;
			*this = obj;
			return *this;
		}

		~Ice() {
			delete this;
			std::cout << "Ice default destructor" << std::endl;
		};

		virtual AMateria* clone() const { // Returns an instance of the real Materia's type
			AMateria *newMateria = new Ice();
			return newMateria;
		};

		virtual std::string const & getName() const {}; // Returns the name of the character
		virtual void equip( AMateria* m ) {}; // Equip a new materia
		virtual void unequip( int idx ) {}; // Discard an existing Materia
		virtual void use( int idx, ICharacter& target ) {}; // displays 
		//Ice: "* shoots an ice bolt at NAME *" || Cure: "* heals NAME’s wounds *"
		//(Of course, replace NAME by the name of the Character given as parameter.)
};

class	Cure: virtual public AMateria
{
	private:
		std::string _type;
	protected:
		/* data */
	public:
		Cure() : _type("cure") {
			std::cout << "Cure default constructor" << std::endl;
		};

		Cure( const Cure &obj ) {
			std::cout << "Cure default copy constructor" << std::endl;
			*this = obj;
		};
		
		Cure &operator=( const Cure &obj ) {
			std::cout << "Cure default assignation operator" << std::endl;
			*this = obj;
			return *this;
		}

		~Cure()	{
			delete this;
			std::cout << "Cure default destructor" << std::endl;
		};

		virtual AMateria* clone() const	{ // Returns an instance of the real Materia's type
			AMateria *newMateria = new Cure();
			return newMateria;
		};

		virtual std::string const & getName() const {}; // Returns the name of the character
		virtual void equip( AMateria* m ) {}; // Equip a new materia
		virtual void unequip( int idx ) {}; // Discard an existing Materia
		virtual void use( int idx, ICharacter& target ) {}; // displays 
		//Ice: "* shoots an ice bolt at NAME *" || Cure: "* heals NAME’s wounds *"
		//(Of course, replace NAME by the name of the Character given as parameter.)
};

class ICharacter
{
	public:
		virtual ~ICharacter() {} // Interface default constructor
		virtual std::string const & getName() const = 0; // Returns the name of the character
		virtual void equip( AMateria* m ) = 0; // Equip a new materia
		virtual void unequip( int idx ) = 0; // Discard an existing Materia
		virtual void use( int idx, ICharacter& target ) = 0; // displays 
		//Ice: "* shoots an ice bolt at NAME *" || Cure: "* heals NAME’s wounds *"
		//(Of course, replace NAME by the name of the Character given as parameter.)
};

class	Character: virtual public AMateria
{
	//The Character possesses an inventory of 4 Materia at most, empty at the start. He’ll
	//equip the Materia in slots 0 to 3, in this order.
	private:
		std::string	_name;
		int			idx;
	protected:
		
	public:
		Character(); // Default Character constructor
		Character( std::string name ); // Parametric Character constructor 
		Character( const Character &obj ); // deepCopy Character constructor
		Character &operator=( const Character &obj );
		~Character(); // Default character destructor 
		std::string const &getName() const; // Returns the name of the Character
		void equip( AMateria* m ); // In case we try to equip a Materia in a full inventory, 
		//or use/unequip a nonexistent Materia, don’t do a thing.
		void unequip( int idx );// The unequip method must NOT delete Materia!
		void use( int idx, ICharacter& target ); // The use(int, ICharacter&) method will have 
		//to use the Materia at the idx slot, and pass target as parameter to the AMateria::use method.
};

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria( AMateria* ) = 0; // must copy the Materia passed as a parameter, 
		//and store it in memory to be cloned later. Much in the same way as for Character , the Source 
		//can know at most 4 Materia, which are not necessarily unique.
		virtual AMateria* createMateria( std::string const & type ) = 0; // will return a new Materia, 
		//which will be a copy of the Materia (previously learned by the Source) which type equals the 
		//parameter. Returns 0 if the type is unknown.
};

class	MateriaSource
{
	private:
		/* data */
	protected:
		/* data */
	public:
		MateriaSource();
		//MateriaSource(/* DATA */);
		MateriaSource( const MateriaSource &obj );
		MateriaSource &operator=( const MateriaSource &obj );
		~MateriaSource();
		void learnMateria( AMateria* );
		AMateria* createMateria( std::string const & type );
};

#endif