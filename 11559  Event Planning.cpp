#include <iostream>
using namespace std;

int  main()
{
    int number, budget, hotel, week, unit_cost, hotel_cost[18], week_day[13], h, w, flag_hotel, flag_room, minimum;
    while(cin >> number >> budget >> hotel >> week)
    {
        minimum = 2000001;
        for(h = 0; h < hotel; h++)
        {
            cin >> unit_cost;

            if(number * unit_cost <= budget)
            {
                flag_hotel = 1;
            }
            else
            {
                flag_hotel = 0;
            }

            for(w = 0, flag_room = 0; w < week; w++)
            {
                cin >> week_day[w];
                if(number <= week_day[w])
                {
                    flag_room = 1;
                }
            }

            if(flag_hotel && flag_room)
            {
                hotel_cost[h] = unit_cost * number;
                if(hotel_cost[h] < minimum)
                    minimum = hotel_cost[h];

                continue;
            }
        }

        if(minimum == 2000001)
        {
            cout << "stay home\n";
        }
        else
        {
            cout << minimum << "\n";
        }
    }
    return 0;
}
