#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain {
 private:
    std::string ideas_[100];

 public:
    Brain(void);
    Brain(const Brain& other);
    virtual ~Brain(void);
    Brain& operator=(const Brain& other);
};

#endif
