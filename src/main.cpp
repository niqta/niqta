#include <iostream>
 class User {
    private:
        std::string name;
    public:
        std::string getName() {
            return this->name;
        }
        void setName (std::string name) {
            this->name = name;
        }
};
int main(int argc, char **argv) {
    User *user = new User();
    user->setName("Test user");
    std::cout  << user->getName() << std::endl;
    delete user;
    
    return 0;
}
