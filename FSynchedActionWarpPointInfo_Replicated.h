// ScriptStruct /Script/FortniteGame.SynchedActionWarpPointInfo_Replicated
// Size: 0x50
struct FSynchedActionWarpPointInfo_Replicated
{
	struct TWeakObjectPtr<class AActor> RefActor; // 0x0 (0x8)
	struct FVector LocalPosition; // 0x8 (0x18)
	struct FQuat LocalDirection; // 0x20 (0x20)
	enum EFortSynchedActionEndMovementMode EndMovementMode; // 0x40 (0x1)
	bool bValid; // 0x41 (0x1)
	unsigned char padding_42[0xe]; // 0x42 (0xe)
};

