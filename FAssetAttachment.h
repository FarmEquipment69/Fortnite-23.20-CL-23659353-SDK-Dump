// ScriptStruct /Script/FortniteGame.AssetAttachment
// Size: 0x30
struct FAssetAttachment
{
	struct FName SocketName; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	class USkeletalMesh* SkeletalMeshAsset; // 0x8 (0x8)
	class UStaticMesh* StaticMeshAsset; // 0x10 (0x8)
	bool bSkipOnDedicatedServers; // 0x18 (0x1)
	bool bIsCurrentWeaponSubstitute; // 0x19 (0x1)
	unsigned char unreflected_1a[0x6]; // 0x1a (0x6) 
	class USkeletalMeshComponentBudgeted* SkelMeshComp; // 0x20 (0x8)
	class UStaticMeshComponent* StaticMeshComp; // 0x28 (0x8)
};

