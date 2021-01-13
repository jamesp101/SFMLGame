cmake_minimum_required(VERSION 3.0)


project(SFMLGame VERSION 1.0)

file(
  GLOB source_files
  "src/*.cpp"
  "src/*.hpp"
)


find_package(SFML REQUIRED COMPONENTS graphics system window audio network)
add_executable(Game ${source_files})
target_link_libraries(Game sfml-graphics sfml-system sfml-window sfml-audio sfml-network)
