#ifndef LHT_ACTUATOR_HPP
#define LHT_HAND_TRAINER_HPP

#include <string>
#include <iostream>
#include <chrono>

template <typename DurationType, typename DurationPeriod>
class KeyActuator {
    public:
            KeyActuator(std::string key_name);
            std::chrono::duration<DurationType, DurationPeriod> update_duration();
            bool is_key_down();
            std::string get_key_name();

            int increase_press_count();
            void reset_press_count();

    private:
        std::string key_name;
        int num_presses;
        std::chrono::duration<DurationType, DurationPeriod> last_press_duration;
        bool key_is_pressed;
};

#endif //LEFT_HAND_TRAINER