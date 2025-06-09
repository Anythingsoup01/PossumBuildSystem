workspace "PossumBuildSystem"

project "PossumBuildSystem"
    kind "StaticLib"
    language "C++"
    dialect "20"

    pch "PossumBuildSystem/src/pbspch.h"

    files
    {
        "PossumBuildSystem/src/*.cpp",
        "PossumBuildSystem/src/*.h",
    }

    includedirs
    {
        "PossumBuildSystem/src",
    }
