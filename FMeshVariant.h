// ScriptStruct /Script/FortniteGame.MeshVariant
// Size: 0xb0
struct FMeshVariant
{
	struct TWeakObjectPtr<class USkeletalMesh> MeshToSwap; // 0x0 (0x28)
	struct FName ComponentToOverride; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct TWeakObjectPtr<class USkeletalMesh> OverrideMesh; // 0x30 (0x28)
	enum EAnimInstanceClassSwapType AnimInstanceClassSwapType; // 0x58 (0x1)
	unsigned char unreflected_59[0x7]; // 0x59 (0x7) 
	struct TWeakObjectPtr<class UClass> AnimInstanceClassToSwap; // 0x60 (0x28)
	struct TWeakObjectPtr<class UClass> OverrideAnimInstanceClass; // 0x88 (0x28)
};

