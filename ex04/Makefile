NAME := sed
CPP := c++
RM := rm -f
CXXFLAG := -Wall -Wextra -Werror -std=c++98

SRCS := main.cpp\
		Sed.cpp

HEADERS := Sed.hpp\

OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
	$(CPP) $(CXXFLAG) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CPP) $(CXXFLAG) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)