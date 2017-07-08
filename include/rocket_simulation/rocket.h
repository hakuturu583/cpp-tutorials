#ifndef ROCKET_H_INCLUDED
#define ROCKET_H_INCLUDED

#include <vector>

#define G 9.8
#define fuel_efficiency 50000000.0
#define earth_raduis 6371000.0
#define timestep 0.01

class rocket_status
{
public:
  double height;
  double fuel_weight;
  double rocket_weight;
  double total_weight;
  double acceralation;
  double velocity;
  rocket_status(double height,double fuel_weight,double rocket_weight,double acceralation,double velocity);
};

class rocket
{
public:
  rocket_status get_status();
  void inject_fuel(double input_fuel);
  rocket();
private:
  double time;
  double height;
  double fuel_weight;
  double rocket_weight;
  double total_weight;
  double acceralation;
  double velocity;
  std::vector<double> time_list,height_list;
  void print_status();
  void plot_status();
  void update_status(double input_fuel);
};
#endif
