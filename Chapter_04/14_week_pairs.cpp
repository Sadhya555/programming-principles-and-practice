#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> sun_day = { "Sunday", "sunday", "Sun", "sun" };
    std::vector<std::string> mon_day = { "Monday", "monday", "Mon", "mon" };
    std::vector<std::string> tue_day = {"Tuesday", "tuesday", "Tues", "tues"};
    std::vector<std::string> wed_day = { "Wednesday", "wednesday", "Wed", "wed" };
    std::vector<std::string> thu_day = { "Thursday", "thursday", "Thur", "thur" };
    std::vector<std::string> fri_day = { "Friday", "friday", "Fri", "fri" };
    std::vector<std::string> sat_day = { "Saturday", "saturday", "Sat", "sat" };

    std::vector<int> sun_sum;
    std::vector<int> mon_sum;
    std::vector<int> tue_sum;
    std::vector<int> wed_sum;
    std::vector<int> thu_sum;
    std::vector<int> fri_sum;
    std::vector<int> sat_sum;

    int illegal_count = 0;

    bool ongoing = true;

    std::cout << "Enter day-and-value pairs\n"
              << "Terminate with '| -1'\n";

    while (ongoing) {
        bool matching = false;
        std::string word;
        int val;

        std::cin >> word >> val;

        if (word == "|" && val == -1)
            ongoing = false;
        else {
            for (std::string day : sun_day)
                if (word == day) {
                    matching = true;
                    sun_sum.push_back(val);
                }
            for (std::string day : mon_day)
                if (word == day) {
                    matching = true;
                    mon_sum.push_back(val);
                }
            for (std::string day : tue_day)
                if (word == day) {
                    matching = true;
                    tue_sum.push_back(val);
                }
            for (std::string day : wed_day)
                if (word == day) {
                    matching = true;
                    wed_sum.push_back(val);
                }
            for (std::string day : thu_day)
                if (word == day) {
                    matching = true;
                    thu_sum.push_back(val);
                }
            for (std::string day : fri_day)
                if (word == day) {
                    matching = true;
                    fri_sum.push_back(val);
                }
            for (std::string day : sat_day)
                if (word == day) {
                    matching = true;
                    sat_sum.push_back(val);
                }
            if (!matching)
                ++illegal_count;
        }
    }

    int sun_sums = 0;
    int mon_sums = 0;
    int tue_sums = 0;
    int wed_sums = 0;
    int thu_sums = 0;
    int fri_sums = 0;
    int sat_sums = 0;

    for (int v : sun_sum)
        sun_sums += v;
    for (int v : mon_sum)
        mon_sums += v;
    for (int v : tue_sum)
        tue_sums += v;
    for (int v : wed_sum)
        wed_sums += v;
    for (int v : thu_sum)
        thu_sums += v;
    for (int v : fri_sum)
        fri_sums += v;
    for (int v : sat_sum)
        sat_sums += v;

    std::cout << '\n' << "Sums of the week:\n"
        << "Sunday: " << sun_sums << '\n'
        << "Monday: " << mon_sums << '\n'
        << "Tuesday: " << tue_sums << '\n'
        << "Wednesday: " << wed_sums << '\n'
        << "Thursday: " << thu_sums << '\n'
        << "Friday: " << fri_sums << '\n'
        << "Saturday: " << sat_sums << '\n'
        << "Rejected values: " << illegal_count << '\n';

}