
#ifndef SCALARCONVERT_HPP
# define SCALARCONVERT_HPP

# include <string>

class ScalarConvert {

	private:
		ScalarConvert(void);
		ScalarConvert(const ScalarConvert& other);
		ScalarConvert& operator=(const ScalarConvert& other);
		~ScalarConvert(void);

	public:
		static void	convert(const std::string& literal);
};

#endif
