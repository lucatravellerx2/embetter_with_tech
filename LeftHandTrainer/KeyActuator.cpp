#include "KeyActuator.hpp"

template <typename DurationType, typename DurationPeriod>
KeyActuator<DurationType, DurationPeriod>::KeyActuator(std::string key_name_) : key_name(key_name_), num_presses(0), key_is_pressed(false) {}

template <typename DurationType, typename DurationPeriod>
bool KeyActuator<DurationType, DurationPeriod>::is_key_down()
{
    return true;
}

template <typename DurationType, typename DurationPeriod>
std::string KeyActuator<DurationType, DurationPeriod>::get_key_name()
{
    return key_name;
}

template <typename DurationType, typename DurationPeriod>
std::chrono::duration<DurationType, DurationPeriod> KeyActuator<DurationType, DurationPeriod>::update_duration()
{
    return last_press_duration;
}

template <typename DurationType, typename DurationPeriod>
int KeyActuator<DurationType, DurationPeriod>::increase_press_count(){
    return 0;
}

template <typename DurationType, typename DurationPeriod>
void KeyActuator<DurationType, DurationPeriod>::reset_press_count(){
    num_presses = 0;
}