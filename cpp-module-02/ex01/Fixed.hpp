#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed{

	private:

		int 	value;
		static const int fractionalBits = 8;

	public:
	
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &fixed);

		float toFloat( void ) const;
		int toInt( void ) const;

		Fixed &operator=(const Fixed &fixed);
		int getRawBits(void)const;
		void setRawBits(int const value);

		~Fixed();

};

	std::ostream &operator<<(std::ostream &out, const Fixed &value);

#endif