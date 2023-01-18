// ScriptStruct /Script/CustomizableObject.MutableRefSkeletalMeshData
// Size: 0x100
struct FMutableRefSkeletalMeshData
{
	struct TWeakObjectPtr<class USkeleton> Skeleton; // 0x60 (0x28)
	struct TWeakObjectPtr<class UPhysicsAsset> PhysicsAsset; // 0x88 (0x28)
	struct TWeakObjectPtr<class UClass> PostProcessAnimInst; // 0xb0 (0x28)
	struct TWeakObjectPtr<class UPhysicsAsset> ShadowPhysicsAsset; // 0xd8 (0x28)
};

