-- premake5.lua

workspace "Lab 1"
  configurations { "Pie" }
  platforms { "Unix", "Windows" }

  filter { "platforms:Unix"}
    system "linux"
    architecture "x86_64"

  filter { "platforms:Windows" }
    system "windows"
    architecture "x86_64"

project "Lab1"
  kind "ConsoleApp"
  language "C++"

  files { "*.h", "*.cpp",
          "exercise_1/*.h", "exercise_1/*.cpp",
          "exercise_2/*.h", "exercise_2/*.cpp",
          "exercise_3/*.h", "exercise_3/*.cpp" }

  location "build"
  targetdir "build"
