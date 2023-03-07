<h1>My Ft_Printf for 42 🖨</h1>

<p>This is a custom implementation of the C library function <code>printf</code> for the 42 programming curriculum. The <code>ft_printf</code> function is used to format and print text to the console.</p>

<h2>Usage</h2>

<p>To use <code>ft_printf</code>, simply call the function with a format string and any arguments you want to print. The format string can contain conversion specifiers, which are placeholders that tell <code>ft_printf</code> how to format the arguments.</p>

<p>For example:</p>

<pre><code>#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    return 0;
}
</code></pre>

<p>This will print <code>Hello, world!</code> to the console.</p>

<h2>Available Conversion Specifiers</h2>

<p><code>ft_printf</code> supports the following conversion specifiers:</p>

<table>
  <thead>
    <tr>
      <th>Specifier</th>
      <th>Description</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td><code>%c</code></td>
      <td>Print a single character</td>
    </tr>
    <tr>
      <td><code>%s</code></td>
      <td>Print a string</td>
    </tr>
    <tr>
      <td><code>%d</code></td>
      <td>Print a signed decimal integer</td>
    </tr>
    <tr>
      <td><code>%i</code></td>
      <td>Print a signed decimal integer</td>
    </tr>
    <tr>
      <td><code>%u</code></td>
      <td>Print an unsigned decimal integer</td>
    </tr>
    <tr>
      <td><code>%o</code></td>
      <td>Print an unsigned octal integer</td>
    </tr>
    <tr>
      <td><code>%x</code></td>
      <td>Print an unsigned hexadecimal integer (lowercase)</td>
    </tr>
    <tr>
      <td><code>%X</code></td>
      <td>Print an unsigned hexadecimal integer (uppercase)</td>
    </tr>
    <tr>
      <td><code>%p</code></td>
      <td>Print a pointer</td>
    </tr>
    <tr>
      <td><code>%%</code></td>
      <td>Print a literal % character</td>
    </tr>
  </tbody>
</table>

<h2>Included Files</h2>

<p>This implementation of <code>ft_printf</code> includes the following files:</p>

<ul>
  <li><code>ft_printf.c</code>: The main <code>ft_printf</code> function</li>
  <li><code>ft_hex_printer.c</code>: A helper function for printing hexadecimal integers</li>
  <li><code>ft_pointer_printer.c</code>: A helper function for printing pointers</li>
  <li><code>ft_print_num_hex_upper.c</code>: A helper function for printing uppercase hexadecimal integers</li>
  <li><code>ft_print_unsi_base_ten.c</code>: A helper function for printing unsigned base 10 integers</li>
  <li><code>ft_putchar_fd.c</code>: A helper function for printing a single character to a file descriptor</li>
  <li><code>ft_putnbr_fd.c</code>: A helper function for printing a signed integer to a file descriptor</li>
  <li><code>ft_putstr_fd.c</code>: A helper function for printing a string to a file descriptor</li>
</ul>
