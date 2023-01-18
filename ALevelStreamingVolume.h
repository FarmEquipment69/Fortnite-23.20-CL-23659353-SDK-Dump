// Class /Script/Engine.LevelStreamingVolume
// Size: 0x2d8
class ALevelStreamingVolume : public AVolume
{
	struct TArray<struct FName> StreamingLevelNames; // 0x2c0 (0x10)
	unsigned char bEditorPreVisOnly; // 0x2d0 (0x1)
	unsigned char bDisabled; // 0x2d0 (0x1)
	unsigned char unreflected_2d1[0x3]; // 0x2d1 (0x3) 
	struct TEnumAsByte<EStreamingVolumeUsage> StreamingUsage; // 0x2d4 (0x1)
	unsigned char padding_2d5[0x3]; // 0x2d5 (0x3)
};

