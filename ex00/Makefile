NAME		= a.out
CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror -Wshadow -Wno-shadow
#CXXFLAGS	= -Wall -Wextra -Werror
CXXFLAGS	+= -std=c++98 -g -fsanitize=address
SRCS		= $(wildcard *.cpp)
OBJDIR  	= ./obj
OBJS    	= $(addprefix $(OBJDIR)/, $(SRCS:%.cpp=%.o))

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

run: $(NAME)
	./$(NAME)

.PHONY:	all clean fclean re run
