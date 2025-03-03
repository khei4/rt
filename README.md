# TDRT (Test Driven Ray Tracing in One Weekend)

This project is an experiment in **Test Driven Development (TDD)** applied to the popular _Ray Tracing in One Weekend_ tutorial series, which can be found at [https://raytracing.github.io/](https://raytracing.github.io/).

By following a TDD approach, we aim to:
- Incrementally build the ray tracer.
- Write tests to validate each step, ensuring correctness and stability.
- Maintain a clear development trajectory from start to finish.


## Acknowledgement

Special thanks to the original authors of the [Ray Tracing in One Weekend](https://raytracing.github.io/) series for providing an excellent resource that inspired this project.


## Build and Run

Make sure you have a **CMake-compatible** compiler toolchain installed. Then, run the following commands in your terminal:

```sh
# Configure the project (generate build files)
cmake -B build

# Build the project
cmake --build build

# Run the output binary
./build/inOneWeekend
```

If you’re on Windows, the final execution step might differ slightly. For example:
```powershell
.\build\Debug\inOneWeekend.exe
```
(depending on your build configuration and CMake generator).


## Testing

To run the test suite (which is part of our TDD approach), use:

```sh
cmake --build build --target check
```

This command will compile and run all tests included in the project. If any tests fail, please check the output for detailed information on what went wrong.


## Contributing

Contributions are welcome! Feel free to open an issue or submit a pull request with improvements or bug fixes. When contributing, please ensure:
- Your code follows the existing style.
- You have added or updated tests as needed.
- You include a clear description of the changes in your pull request.


## License

This project is licensed under the [MIT License](LICENSE). Please see the [LICENSE](LICENSE) file for details.


Enjoy Test Driven Ray Tracing! If you have any questions or suggestions, feel free to open an issue. Happy coding!

