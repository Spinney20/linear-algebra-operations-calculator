# Linear Algebra Operations Calculator

This program performs linear algebra operations using vectors. The main functions can be found in `functii_infiniteproduct.c`.

## Input and Calculation

1. Read the value `n`.

   - If `n` is not 0, read the coordinates of vectors `a` and `b`.
   - Start by reading the first coordinates of both vectors. Create two copies, `ca` and `cb`, to determine the existence of the second maximum.

2. Calculate in a while loop (with a stop condition `n-1` different from 0):

   - Scalar product (`ps`) using the formula.
   - Second maximum for both `a` (`a_max`) and `b` (`b_max`).
   - Value under the radical for norms (`n_a` and `n_b`) following the formula.

   The existence of the second maximum is determined within the loop:

   - Checking if there are at least 2 different coordinates in each vector, if not the existance of a 2nd max is not possible

3. If `n` is 0, skip the previous section and proceed to display.

## Display

The display is handled by the `display` function:

   - Display the scalar product (`ps`).
   - Display the second maximum for `a` and/or `b` when it exists. Display -1 when it doesn't exist.
   - Display the radical of the variables (`n_a` and `n_b`) for norms, according to the formula.
