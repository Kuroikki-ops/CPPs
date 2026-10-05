
#ifndef RPN_HPP
# define RPN_HPP

# include <string>

class RPN {

	private:

	public:
		RPN(void);
		RPN(const RPN& other);
		RPN& operator=(const RPN& other);
		~RPN(void);
		
		void	process(std::string op);
};

#endif
