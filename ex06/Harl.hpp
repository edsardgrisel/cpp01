#include <string>

#ifndef HARL_HPP
#define HARL_HPP

class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		int getLevel(std::string level);


	public:
		Harl();
		~Harl();
		void	complain(std::string level);
};

#endif // HARL_HPP
