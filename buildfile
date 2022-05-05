./: {*/ -build/} doc{README.md} legal{LICENSE AUTHORS} manifest

# Don't install tests.
#
tests/: install = false
