#include <Device.h>

using HomeAutomation::Device;

std::ostream& HomeAutomation::operator<<(std::ostream& os, Device& Device)
{
    return os<<"Device with id: "<<Device.id;
}

Device::Device(std::string id) : id{id}
{
}

Device::Device(const Device& device)
{
    if(&device != this){
        std::cout<<"Device copy constructor used"<<std::endl;
        id = device.id;
    }
    else{
        std::cout<<"Can't copy device from itself";
    }
}

Device& Device::operator=(Device&& Device)
{
    std::cout<<"Device move assignment used";
    id = Device.id;
    Device.id = "";

    return *this;
}

Device& Device::operator=(const Device& Device)
{
    std::cout<<"Device copy assignment used";
    id = Device.id;

    return *this;
}

Device::Device(Device&& Device)
{
    std::cout<<"Device move constructor used";
}

void Device::setId(std::string id){
    this->id = id;
}

std::string Device::getId(){
    return id;
}