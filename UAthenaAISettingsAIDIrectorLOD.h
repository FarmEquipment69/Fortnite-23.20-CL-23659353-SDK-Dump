// Class /Script/FortniteAI.AthenaAISettingsAIDIrectorLOD
// Size: 0x118
class UAthenaAISettingsAIDIrectorLOD : public UDataAsset
{
	struct TArray<struct FPlayerLODViewConeConfig> PlayerLODViewConeConfigs; // 0x30 (0x10)
	struct FPlayerLODViewConeHysteresisConfig PlayerLODViewConeHysteresisConfig; // 0x40 (0x50)
	struct FScalableFloat CouldBeVisibleViewConeAngleDegrees; // 0x90 (0x28)
	struct FScalableFloat CouldBeVisibleMaxDistance; // 0xb8 (0x28)
	struct FScalableFloat LODSortHysteresisDistance; // 0xe0 (0x28)
	struct TArray<struct FFortAIDirectorPerLODConfig> FortAIDirectorLODConfigs; // 0x108 (0x10)
};

