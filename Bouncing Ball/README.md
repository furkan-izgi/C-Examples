# Bouncing Ball Animation

- [x] TODO: Rewrite with using dynamic allocation.

> Benchmark Test for **80 Width** and **10,000, 100,000 and 1,000,000 Height** respectively.

![bb_benchmark](https://github.com/furkan-izgi/C-Examples/blob/main/Bouncing%20Ball/bouncing_ball_benchmark.png)

This C program simulates a bouncing ball animation within a specified width and height.

## Description

The program prompts the user to enter the desired width and height for the animation. It then displays a simple animation where a ball (`*`) moves horizontally within the given boundaries, bouncing back and forth.

## How it Works

1.  **`bounceTheBall(int width, int height)` Function:**
    * Initializes the ball's position to 0 and its direction to "right" (true).
    * Iterates through each row (height).
    * For each row, it prints a vertical bar (`|`) at the beginning and end.
    * It then iterates through each column (width).
    * If the current column matches the ball's position, it prints an asterisk (`*`); otherwise, it prints a space.
    * After each row, it updates the ball's position based on its direction.
    * If the ball reaches the right or left boundary, it reverses its direction.

2.  **`getInfos()` Function:**
    * Prompts the user to enter the width and height of the animation.
    * Calls the `bounceTheBall` function to display the animation.

## Compilation and Execution

1.  **Save the code:** Save the code as a `.c` file (e.g., `bouncing_ball.c`).
2.  **Compile:** Open a terminal or command prompt and compile the code using a C compiler (like GCC):

    ```bash
    gcc bouncing_ball.c -o bounce
    ```

3.  **Run:** Execute the compiled program:

    ```bash
    ./bounce
    ```

4.  **Input:** The program will prompt you to enter the width and height. Enter the desired values and press Enter.

## Example

Width: 6, Height: 15

```
|*     |
| *    |
|  *   |
|   *  |
|    * |
|     *|
|    * |
|   *  |
|  *   |
| *    |
|*     |
| *    |
|  *   |
|   *  |
|    * |
```

## Dependencies

* Standard C library (`stdio.h`)
* Standard C library (`stdlib.h`)

## Notes

* The animation is a simple text-based representation.
* The `typedef enum { false, true } bool;` line defines a boolean type that is used in the code.
* The animations speed is determined by how fast the terminal updates.
