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
		
// ---------------COMPARISON OPERATORS---------------------

		bool operator>(const Fixed &a);
		bool operator<(const Fixed &a);
		bool operator==(const Fixed &a);
		bool operator<=(const Fixed &a);
		bool operator>=(const Fixed &a);
		bool operator!=(const Fixed &a);

// ---------------CALCULATION OPERATORS---------------------

		float operator+(const Fixed a);
		float operator-(const Fixed a);
		float operator*(const Fixed a);
		float operator/(const Fixed a);

// ---------------ITERATION OPERATORS----------------------

		Fixed &operator++(void);
		Fixed &operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);
		
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(Fixed const &a, Fixed const &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(Fixed const &a, Fixed const &b);

		int getRawBits(void)const;
		void setRawBits(int const value);

		~Fixed();
};

	std::ostream &operator<<(std::ostream &out, const Fixed &value);

#endif