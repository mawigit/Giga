workspace "Giga"
	architecture "x64"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

	outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

	IncludeDir = {}
	IncludeDir["GLFW"] = "Giga/vendor/GLFW/include"

project "Giga"
	location "Giga"
	kind "SharedLib"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	pchheader "arpch.h"
    pchsource "Giga/src/arpch.cpp"

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		"%{prj.name}/src",
		"%{prj.name}/vendor/spdlog/include",
		"%{IncludeDir.GLFW}"
	}

	links
    {
        "GLFW",
        "opengl32.lib",
        "dwmapi.lib"
    }

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines
		{
			"GG_PLATFORM_WINDOWS",
			"GG_BUILD_DLL"
		}

		postbuildcommands
		{
			("{copy} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Sandbox")
		}

	filter "configurations:Debug"
		defines "GG_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "GG_RELEASE"
		optimize "On"

	filter "configurations:Dist"
		defines "GG_DIST"
		optimize "On"

project "Sandbox"
	location "Sandbox"
	kind "ConsoleApp"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		"Giga/vendor/spdlog/include",
		"Giga/src"
	}

	links
	{
		"Giga"
	}


	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines
		{
			"GG_PLATFORM_WINDOWS"
		}

	filter "configurations:Debug"
		defines "GG_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "GG_RELEASE"
		optimize "On"

	filter "configurations:Dist"
		defines "GG_DIST"
		optimize "On"