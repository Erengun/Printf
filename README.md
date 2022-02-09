# Printf
My implementation of printf according to 42 standarts.<br />

You can compile it using "Make" command,<br />
after that you can do : gcc <yourfilename.c> libftprintf.a<br />

The prototype of ft_printf() is:<br />
  int ft_printf(const char *, ...);<br />

Libft is my libary<br />
My function can handle the following conversions: cspdiuxX%<br />

• %c Prints a single character.<br />
• %s Prints a string (as defined by the common C convention).<br />
• %p The void * pointer argument has to be printed in hexadecimal format.<br />
• %d Prints a decimal (base 10) number.<br />
• %i Prints an integer in base 10.<br />
• %u Prints an unsigned decimal (base 10) number.<br />
• %x Prints a number in hexadecimal (base 16) lowercase format.<br />
• %X Prints a number in hexadecimal (base 16) uppercase format.<br />
• %% Prints a percent sign.<br />
