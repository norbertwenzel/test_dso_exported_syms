# Test DSO exported symbols

Create a dummy project with two different settings:

- `api_only`: Move the implementation to a static library and link it with the shared library. The shared library itself only provides a thin C wrapper around the C++ API.
- `api_all`: Build the implementation together with the shared library. No static library is involved.

## Result

The static libraries API is publicly exported for `api_only` whereas the implementation seems to stay private in `api_all`.

## Instructions

- run the `build.sh` script.
- call `nm -D *.so` in working directory and compare the list of symbols

