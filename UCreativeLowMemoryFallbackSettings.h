// Class /Script/CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackSettings
// Size: 0x138
class UCreativeLowMemoryFallbackSettings : public UDeveloperSettings
{
	struct TWeakObjectPtr<class UObject> WarningToastIcon; // 0x30 (0x28)
	struct FCreativeLowMemoryFallbackUserFacingText EditModeText; // 0x58 (0x48)
	struct FCreativeLowMemoryFallbackUserFacingText PlayModeText; // 0xa0 (0x48)
	struct TMap<struct TWeakObjectPtr<class UFortPlaylist>, struct FCreativeLowMemoryFallbackFreeMemoryThresholds> PlaylistOverrideThresholds; // 0xe8 (0x50)
};

