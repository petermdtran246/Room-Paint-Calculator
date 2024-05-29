# Room Paint Calculator

This C++ project calculates the number of paint cans required to cover a wall based on its height, width, and the coverage area per can of paint.

## Algorithm
The algorithm follows these steps:

### Input:

  -  The program prompts the user to enter three values:
  -  height: The height of the wall in meters (m).
  -  width: The width of the wall in meters (m).
  -  coverage (optional): The area covered by a single can of paint in square meters (m²). If not provided, the program assumes a default coverage of 5 square meters per can.

### Calculation:

The program calculates the total wall area by multiplying the height and width: wall_area = height * width.

### Cans Required:

To determine the number of paint cans needed, the program performs the following steps:
  -  Casts the height * width calculation to double to prevent integer division (which truncates decimals).
  -  Divides the total wall area by the coverage area per can: num_of_cans = (wall_area / coverage).
  -  Uses the ceil function from the <cmath> library to round the result up to the nearest whole number, accounting for potential partial cans: num_of_cans = ceil(num_of_cans).

### Output:

The program displays a message indicating the number of cans of paint required: "You'll need {num_of_cans} cans of paint.".
