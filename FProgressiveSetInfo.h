// ScriptStruct /Script/FortniteUI.ProgressiveSetInfo
// Size: 0x68
struct FProgressiveSetInfo
{
	struct FText SetName; // 0x0 (0x18)
	struct TWeakObjectPtr<class UMaterialInterface> TileMaterial; // 0x18 (0x28)
	enum EProgressiveSetProgress SetProgress; // 0x40 (0x1)
	unsigned char unreflected_41[0x3]; // 0x41 (0x3) 
	int UnlockedStagesCount; // 0x44 (0x4)
	int TotalStagesCount; // 0x48 (0x4)
	unsigned char padding_4c[0x1c]; // 0x4c (0x1c)
};

