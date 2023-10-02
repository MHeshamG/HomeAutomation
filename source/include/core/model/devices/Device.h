#ifndef HOME_AUTOMATION_DEVICE_H
#define HOME_AUTOMATION_DEVICE_H

#include <iostream>
#include <string>

namespace Core
{
    class Device
    {
        public:
            Device(std::string id);
            Device(const Device& Device);
            Device& operator=(Device&& Device);
            Device& operator=(const Device& Device);
            Device(Device&& Device);
            ~Device() = default;

            std::string id;
            std::string name;

            void setId(std::string id);
            std::string getId();

    };

    std::ostream& operator<<(std::ostream& os, Device& Device);

}; //Namespace HomeAutomation

#endif