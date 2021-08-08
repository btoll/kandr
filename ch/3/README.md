*Exercise 3-1*.  Our binary search makes two tests inside the loop, when one would suffice (t the price of more tests outside).  Write a version with only one test inside the loop and measure the difference in run-time.

*Exercise 3-2*.  Write a function `escape(s, t)` that converts characters like newline and tab in visible escape sequences like `\n` and `\t` as it copies the string `t` to `s`.  Use a `switch`.  Write a function for the other direction as well, converting escape sequences in o the real characters.

*Exercise 3-3*.  Write a function `expand(s1, s2)` that expands shorthand notations like `a-z` in the string `s1` into the equivalent complete list `abc..xyz` in `s2`.  Allow for letters of either case and digits, and be prepared to handle cases like `a-b-c` and `a-z0-9` and `-a-z`.  Arrange that a leading or trailing `-` is taken literally.

