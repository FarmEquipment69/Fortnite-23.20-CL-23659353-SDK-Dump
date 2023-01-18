// ScriptStruct /Script/FortniteGame.SyncedMontageParams
// Size: 0x18
struct FSyncedMontageParams
{
	class UAnimMontage* SyncedMontage; // 0x0 (0x8)
	enum EMontageSyncTargetType MontageTarget; // 0x8 (0x1)
	struct TEnumAsByte<EFortCustomPartType> PartType; // 0x9 (0x1)
	unsigned char unreflected_a[0x2]; // 0xa (0x2) 
	float MontageStopBlendTime; // 0xc (0x4)
	bool bSyncMontage; // 0x10 (0x1)
	unsigned char padding_11[0x7]; // 0x11 (0x7)
};

