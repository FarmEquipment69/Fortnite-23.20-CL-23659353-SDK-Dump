// ScriptStruct /Script/FortniteGame.GliderBitsDefinition
// Size: 0xd0
struct FGliderBitsDefinition
{
	struct TWeakObjectPtr<class USkeletalMesh> Mesh; // 0x0 (0x28)
	struct TWeakObjectPtr<class UClass> AnimBPClass; // 0x28 (0x28)
	struct TArray<struct TWeakObjectPtr<class UMaterialInterface>> OverrideMaterials; // 0x50 (0x10)
	struct FTransform RelativeTransform; // 0x60 (0x60)
	struct FName SocketName; // 0xc0 (0x4)
	bool bApplyGliderMaterialOverrides; // 0xc4 (0x1)
	unsigned char padding_c5[0xb]; // 0xc5 (0xb)
};

