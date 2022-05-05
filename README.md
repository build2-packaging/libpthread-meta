# libpthread-meta

Metadata library for the `pthread` system library.

Note that it's more of an example of a "metadata library" rather than
something you might want to use (for the recommended way of dealing with the
"pthread mess" see @@ HOWTO).

A metadata library is a binless library also usually without any headers and
whose only purpose is to export dependency on other, normally
platform-specific system library or libraries. By convention, such libraries
are name by appending `-meta` (or `_meta`, `Meta`; depending on your naming
convention) to the original library name (it's also a good idea to check
that such a name does not by any chance clash with anything existing).
