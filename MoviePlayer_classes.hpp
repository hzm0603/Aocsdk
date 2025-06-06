﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MoviePlayer

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class MoviePlayer.MoviePlayerSettings
// 0x0018 (0x0060 - 0x0048)
class UMoviePlayerSettings final : public UObject
{
public:
	bool                                          bWaitForMoviesToComplete;                          // 0x0048(0x0001)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bMoviesAreSkippable;                               // 0x0049(0x0001)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4A[0x6];                                       // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         StartupMovies;                                     // 0x0050(0x0010)(Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MoviePlayerSettings">();
	}
	static class UMoviePlayerSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMoviePlayerSettings>();
	}
};
static_assert(alignof(UMoviePlayerSettings) == 0x000008, "Wrong alignment on UMoviePlayerSettings");
static_assert(sizeof(UMoviePlayerSettings) == 0x000060, "Wrong size on UMoviePlayerSettings");
static_assert(offsetof(UMoviePlayerSettings, bWaitForMoviesToComplete) == 0x000048, "Member 'UMoviePlayerSettings::bWaitForMoviesToComplete' has a wrong offset!");
static_assert(offsetof(UMoviePlayerSettings, bMoviesAreSkippable) == 0x000049, "Member 'UMoviePlayerSettings::bMoviesAreSkippable' has a wrong offset!");
static_assert(offsetof(UMoviePlayerSettings, StartupMovies) == 0x000050, "Member 'UMoviePlayerSettings::StartupMovies' has a wrong offset!");

}

