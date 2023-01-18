// ScriptStruct /Script/Engine.MaterialOverrideNanite
// Size: 0x38
struct FMaterialOverrideNanite
{
	struct TWeakObjectPtr<class UMaterialInterface> OverrideMaterialRef; // 0x0 (0x28)
	bool bEnableOverride; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	class UMaterialInterface* OverrideMaterial; // 0x30 (0x8)
};

