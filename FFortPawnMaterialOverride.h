// ScriptStruct /Script/FortniteGame.FortPawnMaterialOverride
// Size: 0x70
struct FFortPawnMaterialOverride
{
	struct FGuid OverrideId; // 0x0 (0x10)
	struct TWeakObjectPtr<class UMaterialInterface> Material; // 0x10 (0x28)
	struct FFortPawnMaterialOverrideCopiedParameters MaterialParamsToCopy; // 0x38 (0x30)
	float Priority; // 0x68 (0x4)
	enum EFortPawnMaterialOverrideFlags Flags; // 0x6c (0x1)
	unsigned char padding_6d[0x3]; // 0x6d (0x3)
};

