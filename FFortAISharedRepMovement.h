// ScriptStruct /Script/FortniteGame.FortAISharedRepMovement
// Size: 0x80
struct FFortAISharedRepMovement
{
	struct FRepMovement RepMovement; // 0x0 (0x70)
	float RepTimeStamp; // 0x70 (0x4)
	unsigned char RepMovementMode; // 0x74 (0x1)
	enum EFortAILODLevel RepCurrentFortAILODLevel; // 0x75 (0x1)
	unsigned char unreflected_76[0x2]; // 0x76 (0x2) 
	struct FGameplayAbilityRepSharedAnim_Index* RepSharedAnimInfo; // 0x78 (0x8)
};

