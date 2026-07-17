                                                                                                                                                                                                                        #pragma once
#include <cstdint>
#include <cstdlib>
#include <intrin.h>
#include "Driver.hpp"

template<typename T>
inline T rotl(T x, int n) noexcept {
    constexpr int bits = sizeof(T) * 8;
    n &= bits - 1;
    return (x << n) | (x >> (bits - n));
}


inline uint64_t DecryptUworld(uint64_t ptr)
{
	if (!ptr) return 0;
	uint64_t v = ptr;
	v ^= 0x012F546CULL;
	v = _byteswap_uint64(v);
	v -= 1274101633ULL;
	return v;
}

namespace offsets {

    inline uintptr_t GWorld = 0x1B2439A0;
    inline uintptr_t& UWorld = GWorld;
    inline uintptr_t OwningGameInstance = 0x250;
    inline uintptr_t GameState = 0x1D8;
    inline uintptr_t PlayerArray = 0x288;
    inline uintptr_t PersistentLevel = 0x38;
    inline uintptr_t Levels = 0x1F0;
    inline uintptr_t AActors = 0x40;
    inline uintptr_t ULevel_ActorArray = AActors;
    inline uintptr_t ActorArray = AActors;
    inline uintptr_t TargetedFortPawn = 0x1650;
    inline uintptr_t LocationUnderReticle = 0x20A0;
    inline uintptr_t HabaneroComponent = 0x908;
    inline uintptr_t RootComponent = 0x1B0;
    inline uintptr_t RelativeLocation = 0x140;
    inline uintptr_t RelativeRotation = 0x158;
    inline uintptr_t RelativeScale3D = 0x170;
    inline uintptr_t ComponentVelocity = 0x188;
    inline uintptr_t OverlappingBuildings = 0x1df8;


    inline uintptr_t LocalPlayers = 0x38;
    inline uintptr_t PlayerController = 0x30;
    inline uintptr_t AcknowledgedPawn = 0x318;
    inline uintptr_t PlayerCameraManager = 0x328;
    inline uintptr_t TargetViewRotation = 0x340;
    inline uintptr_t TeamIndex = 0xF31;
    inline uintptr_t InitialSquadSize = 0x1a00;
    inline uintptr_t PlayerName = 0xA08;
    inline uintptr_t PlayerNamePrivate = 0x308;
    inline uintptr_t Platform = 0x400;
    inline uintptr_t RankedProgress = 0xD8;
    inline uintptr_t SeasonLevelUIDisplay = 0x122c;
    inline uintptr_t KillScore = 0xF48;
    inline uintptr_t RebootCount = 0x1894;
    inline uintptr_t bIsDying = 0x720;
    inline uintptr_t bIsDBNO = 0x849;
    inline uintptr_t bIsABot = 0x27A;
    inline uintptr_t bIsSliding = 0x713;
    inline uintptr_t bIsSkydiving = 0x214f;


    inline uintptr_t PawnPrivate = 0x2E8;
    inline uintptr_t PlayerState = 0x290;
    inline uintptr_t MoveIgnoreActors = 0x330;


    inline uintptr_t Mesh = 0x2F0;
    inline uintptr_t BoneArray = 0x650;
    inline uintptr_t BoneCache = 0x660;
    inline uintptr_t MeshDeformerInstances = 0x620;
    inline uintptr_t ComponentToWorld = 0x1E0;
    inline uintptr_t LastRenderTime = 0x330;


    inline uintptr_t CameraLocation = 0x178;
    inline uintptr_t CameraRotation = 0x188;
    inline uintptr_t CameraFOV = 0x374;
    inline uintptr_t CachedViewInfoRenderedLastFrame = 0x188;


    inline uintptr_t NetConnection = 0x4a8; 
    inline uintptr_t RotationInput = 0x4B0; 
    inline uintptr_t PlayerAim = RotationInput; 
    inline uintptr_t PlayerAimOffset = 0x2200; 
    inline uintptr_t AdditionalAimOffset = 0x21F0; 
    inline uintptr_t ControlRotation = 0x2E8;


    inline uintptr_t CurrentWeapon = 0x998;
    inline uintptr_t WeaponData = 0x618;
    inline uintptr_t WeaponOffsetCorrection = 0x2230;
    inline uintptr_t AmmoCount = 0x11B4;
    inline uintptr_t CurrentVehicle = 0x2B00;
    inline uintptr_t FOVMinimum = 0x2158;
    inline uintptr_t FOVMaximum = 0x215C;
    inline uintptr_t ItemName = 0x38;
    inline uintptr_t CurrentReloadDuration = 0x1188;
    inline uintptr_t bIsReloadingWeapon = 0x381;
    inline uintptr_t ReloadAnimation = 0x15B0;
    inline uintptr_t LWProjectile_ActivateRemovedTimestamp = 0x26A0;
    inline uintptr_t ProjectileSpeed = 0x230C;
    inline uintptr_t ProjectileGravity = 0x2310;
    inline uintptr_t ServerWorldTimeSecondsDelta = 0x2A8;
    inline uintptr_t LastFireTimeVerified = 0x10F4; 
    inline uintptr_t WeaponCoreAnimation = 0x1660; 
    inline uintptr_t PrimaryPickupItemEntry = 0x368; 
    inline uintptr_t ItemType = 0xA0; 
    inline uintptr_t PrimaryAssetOverride = 0xA9; 
    inline uintptr_t ItemRarity = 0xAA; 
    inline uintptr_t bAlreadySearched = 0xCE2; 


    inline uintptr_t TargetSourceOffset = 0x1130; 
    inline uintptr_t TargetSourceOffsetWhileTargeting = 0x1160; 
    inline uintptr_t TargetSourceOffsetWhileCrouched = 0x1148; 
    inline uintptr_t bTraceThroughWorld = 0x1115; 


    inline uintptr_t Spectators = 0xAB0; 
    inline uintptr_t SpectatorArray = 0x108; 


    inline uintptr_t Tier = 0xaa; 
    inline uintptr_t UsernameComponent = 0x260; 


    inline uintptr_t GEngine = 0x1B245388;
    inline uintptr_t GNames = 0x1B0F6B40; 
    inline uintptr_t GObjects = 0x1B1D3640; 
    inline uintptr_t GObjectsCount = 0x1B1D365C; 
    inline uintptr_t StaticFindObject = 0x68A313; 
    inline uintptr_t StaticLoadObject = 0x502B57; 
    inline uintptr_t ProcessEvent = 0xC5C44; 
    inline uintptr_t BoneMatrix = 0x84D4FC; 
    inline uintptr_t FNameToString = 0x5E7E4; 


    inline uintptr_t FMemory_Memcmp = 0x11E6BF30; 
    inline uintptr_t FMemory_Memchr = 0x11E6BF20; 
    inline uintptr_t FMemory_Memmove = 0x11E6BF40; 
    inline uintptr_t FMemory_Memcpy = 0x11E6BF60; 
    inline uintptr_t FMemory_Memset = 0x11E6BF50; 
    inline uintptr_t FMemory_Malloc = 0x11E6BF70; 
    inline uintptr_t FMemory_Realloc = 0x11E6BF80; 
    inline uintptr_t FMemory_Free = 0x11E6BF90; 
    inline uintptr_t GObjects_NumElements = GObjectsCount; 
    inline uintptr_t UObject_GObjects = GObjects; 
    inline uintptr_t UObject_ProcessEvent = ProcessEvent; 
    inline uintptr_t UObject_StaticFindObject = StaticFindObject; 
    inline uintptr_t FName_ToString = FNameToString; 
    inline uintptr_t FName_GNames = GNames; 
    inline uintptr_t FUObjectArray_IndexToObject = 0x802865; 


    inline uintptr_t& b_is_dying = bIsDying; 
    inline uintptr_t& current_weapon = CurrentWeapon; 
    inline uintptr_t& weapon_data = WeaponData; 
    inline uintptr_t& current_vehicle = CurrentVehicle; 
    inline uintptr_t& ranked_progress = RankedProgress;
    
    // Health and Shield offsets (updated for Chapter 5)
    inline uintptr_t AttributeSet = 0x1A8; // Try this common offset first
    inline uintptr_t Health = 0x30;
    inline uintptr_t MaxHealth = 0x58;
    inline uintptr_t Shield = 0x208;
    inline uintptr_t MaxShield = 0x20C; 
    // inline uintptr_t& PlayerAimOffset = PlayerAim;
}

class UWorld
{
public:


	static inline uintptr_t get_world()
	{
		if (!base_address) return 0;

		uint64_t v = read<uint64_t>(base_address + offsets::GWorld);
		if (!v) return 0;

		v ^= 0x012F546CULL;
		v = _byteswap_uint64(v);
		v -= 1274101633ULL;

		return static_cast<uintptr_t>(v);
	}
};

inline uint64_t decryptUWorld(uint64_t value)
{
    return DecryptUworld(value);
}
