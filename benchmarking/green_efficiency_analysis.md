# Green Efficiency Analysis #


## Measurement Methodology ##

I compiled a program, *comparison_algorithms.c*, to run two separate benchmark tests sequentially.

The program used clock() to obtain CPU-time measurements, stored those readings as clock_t, then converted the differences into seconds.

The calculated execution times were stored as a double rather than a float to increase the precision.

The benchmark data array size was 50000, and the program recorded each benchmarking method output separately. Each algorithm counted even numbers in the data as they executed their loops to generate the result.


### Method 1: count even, naive algorithm ###

This algorithm contained a nested for loop, with each new pass incrementally checking 1 more data point than the previous loop.
On each pass it then checked to see if any of the data points were even or not.

**Naive algorithm result:** 625025000
**Naive algorithm times:**

1. 0.590791s
2. 0.612559s
3. 0.589844s

### Method 2: count even, single pass algorithm ###

This algorithm contained a single for loop, running from the start to the end of the array, and only recorded the even numbers as it continued.

**Single-pass algorithm result:** 25000
**Single-pass algorithm times:**

1. 0.000023s
2. 0.000024s
3. 0.000024s


## Relation Between Runtime and Energy Consumption ##

Take the formula: 'E = P x t'
This calculates electrical or mechanical energy (E) consumed or produced over a given time.

What the variables represent:

E (Energy): Measured in joules (J) or watt-hours (Wh) / kilowatt-hours (kWh).
P (Power): Measured in watts (W) or kilowatts (kW), representing the rate of energy transfer or consumption.
t (Time): Measured in seconds (s) if power is in watts and energy is in joules, or hours (h) if power is in kilowatts and energy is in kilowatt-hours.

Therefore if we consider two theoretical programs, designed to create the same output and using the same power: then the one with the shorter runtime uses less energy.


## Limitations of the Experiment ##

1. This experiment only creates data for the time an algorithm took to execute. While one can speak to the efficiency, or lack thereof, in each approach there is no recording of comparative energy use between the two algorithms. The experiment cannot explicitly state that a program X times slower than Y will use X much more energy than Y.

2. This experiment had a single dataset size and testing environment. Its results cannot necessarily be extrapolated to other dataset sizes and testing environments.

3. The two benchmarking algorithms do not create equivalent outputs.


## Practical Engineering Takeaway ##

If a poorly implemented algorithm is used instead of a more optimal algorithm this can have flow-on effects depending on how frequently the algorithm runs.

To extrapolate:
Let us assume, similar to the benchmark test, an algorithm that includes faulty logic via an unnecessary nested for loop is entered into a program.
Let us also assume that the inner loop makes the algorithm effectively 25,256 times slower than an algorithm with correct logic.

Based on the relation between runtime and energy consumption, even though in this experiment specific energy use was not recorded, it can be hypothesised that if the part of the program incorporating the slower algorithm is regularly run, the differences to overall runtime will add up and have an impact on energy use.

This hypothesis could be tested in different experiments designed to record both the runtime and energy use.