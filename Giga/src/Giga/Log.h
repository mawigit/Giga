#pragma once

#include<memory>

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Giga
{

class GIGA_API Log
{
public:
	static void Init();

	inline static std::shared_ptr<spdlog::logger>& GetCoreLogger()
	{
		return s_CoreLogger;
	}
	inline static std::shared_ptr<spdlog::logger>& GetClientLogger()
	{
		return s_ClientLogger;
	}

private:
	static std::shared_ptr<spdlog::logger> s_CoreLogger;
	static std::shared_ptr<spdlog::logger> s_ClientLogger;
};

}

//Core log macros
#define GG_CORE_TRACE(...) ::Giga::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define GG_CORE_INFO(...)  ::Giga::Log::GetCoreLogger()->info(__VA_ARGS__)
#define GG_CORE_WARN(...)  ::Giga::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define GG_CORE_ERROR(...) ::Giga::Log::GetCoreLogger()->error(__VA_ARGS__)
#define GG_CORE_FATAL(...) ::Giga::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client log macros
#define GG_TRACE(...) ::Giga::Log::GetClientLogger()->trace(__VA_ARGS__)
#define GG_INFO(...)  ::Giga::Log::GetClientLogger()->info(__VA_ARGS__)
#define GG_WARN(...)  ::Giga::Log::GetClientLogger()->warn(__VA_ARGS__)
#define GG_ERROR(...) ::Giga::Log::GetClientLogger()->error(__VA_ARGS__)
#define GG_FATAL(...) ::Giga::Log::GetClientLogger()->fatal(__VA_ARGS__)