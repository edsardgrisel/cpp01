#include "Harl.hpp"

int	main(void)
{
	Harl harl;

	// Debug level
	harl.complain("DEBUG");

	// Info level
	harl.complain("INFO");

	// Warning level
	harl.complain("WARNING");

	// Error level
	harl.complain("ERROR");

	// Unknown level
	harl.complain("UNKWOWN");
}