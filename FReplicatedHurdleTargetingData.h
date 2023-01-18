// ScriptStruct /Script/VaultingCodeRuntime.ReplicatedHurdleTargetingData
// Size: 0x70
struct FReplicatedHurdleTargetingData
{
	enum EHurdleType Type; // 0x0 (0x1)
	enum EFortSynchedActionEndMovementMode EndMovementMode; // 0x1 (0x1)
	unsigned char unreflected_2[0x6]; // 0x2 (0x6) 
	struct FVector_NetQuantize10 FacingCornerLocation; // 0x8 (0x18)
	struct FVector_NetQuantize10 FacingCornerNormal; // 0x20 (0x18)
	struct FVector_NetQuantize10 BackCornerLocation; // 0x38 (0x18)
	struct FVector_NetQuantize10 FinalLandingPosition; // 0x50 (0x18)
	bool bValid; // 0x68 (0x1)
	unsigned char padding_69[0x7]; // 0x69 (0x7)
};

