// ScriptStruct /Script/FortniteGame.FortPawnMaterialOverrideState
// Size: 0x40
struct FFortPawnMaterialOverrideState
{
	class USceneComponent* SceneComp; // 0x0 (0x8)
	struct TArray<class UMaterialInterface*> OriginalMaterials; // 0x8 (0x10)
	struct TArray<class UMaterialInterface*> AppliedMaterials; // 0x18 (0x10)
	struct TArray<class UFXSystemComponent*> FXComps; // 0x28 (0x10)
	unsigned char padding_38[0x8]; // 0x38 (0x8)
};

