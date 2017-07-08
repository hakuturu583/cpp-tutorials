#include "rocket.h"
#include "matplotlibcpp.h"

#include <iostream>
#include <vector>

//constructor of rocket status class
rocket_status::rocket_status(double height,double fuel_weight,double rocket_weight,double acceralation,double velocity)
{
  this->height = height;
  this->fuel_weight = fuel_weight;
  this->rocket_weight = rocket_weight;
  this->total_weight = fuel_weight + rocket_weight;
  this->acceralation = acceralation;
  this->velocity = velocity;
}

//constructor of rocket class
rocket::rocket()
{
  fuel_weight   =  1900000.0;
  rocket_weight =   100000.0;
  total_weight = fuel_weight + rocket_weight;
  height = 0;
  time_list.push_back(0.0);
  height_list.push_back(0.0);
}

//get rocket_status
rocket_status rocket::get_status()
{
  rocket_status status(height,fuel_weight,rocket_weight,acceralation,velocity);
}

//inject rocket fuel
void rocket::inject_fuel(double input_fuel)
{
  if(input_fuel > fuel_weight)
  {
    input_fuel = fuel_weight;
    std::cout << "fuel is empty \ninput fuel is" << input_fuel << std::endl;
  }
  update_status(input_fuel);
}

//update rocket status by using euler method
void rocket::update_status(double input_fuel)
{
  fuel_weight = fuel_weight - input_fuel;
  total_weight = rocket_weight + fuel_weight;
  double power = input_fuel * fuel_efficiency - total_weight * G * (earth_raduis/(earth_raduis+height))* (earth_raduis/(earth_raduis+height));
  //use euler method
  acceralation = acceralation + power / total_weight * timestep;
  velocity = velocity + acceralation * timestep;
  height = height + velocity * timestep;
  time = time + timestep;
  time_list.push_back(time);
  height_list.push_back(height);
  print_status();
}

//print status of rocket
void  rocket::print_status()
{
  std::cout << "[time = " << time << "]\nheight        : " << height << "[m]\nvelocity      : "  << velocity << "[m/s]\nacceralation  : " << acceralation << "[m^2/s^2]" << std::endl;
  std::cout << "toatal_weight : " << total_weight << "[kg]\nfuel remains  : " << fuel_weight << "[kg]" << std::endl;
  std::cout << "G             : " << G * (earth_raduis/(earth_raduis+height))* (earth_raduis/(earth_raduis+height)) <<'\n';
}

//plot rocket status by drawing graph
void rocket::plot_status()
{
  matplotlibcpp::plot(time_list,height_list,"--r");
  matplotlibcpp::show();
}
