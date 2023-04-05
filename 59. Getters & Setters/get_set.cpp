#include <iostream>

class Stove{
    private:
        int temperature;
        int power;
    
    public:
        Stove(int temperature, int power){
            set_temperature(temperature);
            set_power(power);
        }

        Stove(){
            set_temperature(0);
            set_power(0);
        }

        void set_temperature(int temperature){
            this->temperature = temperature;
        }

        int get_temperature(){
            return this->temperature;
        }

        void set_power(int power){
            this->power = power;
        }

        int get_power(){
            return this->power;
        }
};


int main(){
    // Abstraction is the process of hiding the implementation details from the user, only the functionality will be provided to the user.  In other words, the user will have the information on what the object does but not how it does it.

    // Getter and setter methods are used to access and update the value of a variable, they are also known as accessor and mutator methods.

    // Getters make the private variables accessible (readable) to the outside world.

    // Setters make the private variables modifiable (writeable) from the outside world.

    Stove stove1;
    stove1.set_temperature(200); // can't just use stove1.temperature
    stove1.set_power(1000); // can't just use stove1.power

    // Read the temperature attribute
    std::cout << "Temperature: " << stove1.get_temperature() << std::endl;

    // Read the power attribute
    std::cout << "Power: "<< stove1.get_power() << std::endl;

    Stove stove2(300, 2000);

    // Read the temperature attribute
    std::cout << "Temperature: " << stove2.get_temperature() << std::endl;

    // Read the power attribute
    std::cout << "Power: "<< stove2.get_power() << std::endl;

    return 0;
}