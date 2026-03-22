#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double x1, y1, x2, y2;
    double v_initial, acceleration, v_max;

    cout << "--- Rover Navigation System ---" << endl;

    cout << "Enter Origin (x1 y1): < ";

    if (!(cin >> x1 >> y1))
    {
        cout << "Invalid input. Only numbers allowed." << endl;
        return 1;
    }

    cout << "Enter Destination (x2 y2): ";
    if (!(cin >> x2 >> y2)) {
        cout << "Invalid input. Only numbers allowed." << endl;
        return 1;
    }

    // Calc Euclidean Distance

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Motion Para

    cout << "Enter Initial Velocity (m/s): ";
    cin >> v_initial;
    cout << "Enter Acceleration (m/s^2): ";
    cin >> acceleration;
    cout << "Enter Top Speed (m/s): ";
    cin >> v_max;

    // Error Handling & Logic

    if (acceleration <= 0 && v_initial < v_max && distance > 0) {
        cout << "Error: Acceleration should be positive to reach top speed." << endl;
        return 1;
    }

    double time_total = 0;



    // Calc time to reach top speed: v = u + at  => t = (v - u) / a

    double time_to_reach_max = (v_max - v_initial) / acceleration;
    


    // Dist covered during acc: d = ut + 0.5at^2

    double dist_during_accel = (v_initial * time_to_reach_max) + (0.5 * acceleration * pow(time_to_reach_max, 2));

    if (dist_during_accel >= distance) {

        // Case: Destination reached before hitting top speed
        // Solve d = v_i*t + 0.5*a*t^2  => 0.5at^2 + v_it - d = 0
        // Quadratic formula: t = [-v_i + sqrt(v_i^2 - 4(0.5a)(-d))] / (2 * 0.5a)
        time_total = (-v_initial + sqrt(pow(v_initial, 2) - (4 * 0.5 * acceleration * -distance))) / (acceleration);
    } else {
        // Case: Hits top speed, then cruises
        double remaining_dist = distance - dist_during_accel;
        double time_cruising = remaining_dist / v_max;
        time_total = time_to_reach_max + time_cruising;
    }

    // Final O/p
    cout << fixed << setprecision(1);
    cout << "\n--- Results ---" << endl;
    cout << "Distance to destination: > " << distance << " m" << endl;
    cout << "Time required: > " << time_total << " seconds" << endl;
    cout << "\n---------------" << endl;

    return 0;
}