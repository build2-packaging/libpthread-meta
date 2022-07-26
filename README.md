# libpthread-meta

Metadata library for the `pthread` system library.

Note that it's more of an example of a "metadata library" rather than
something you might want to use (for the recommended way of dealing with the
"pthread mess" see [How do I link the `pthread`
library?](https://github.com/build2/HOWTO/blob/master/entries/link-pthread.md)).

A metadata library is a binless library usually also without any headers and
whose only purpose is to export dependency on other, normally
platform-specific system, library or libraries. By convention, such libraries
are named by appending `-meta` (or `_meta`, `Meta`; depending on the original
library's naming convention) to the original library name. It's also a good
idea to check that the resulting name does not by any chance clash with
anything existing.
