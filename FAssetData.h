// ScriptStruct /Script/CoreUObject.AssetData
// Size: 0x38
struct FAssetData
{
	struct FName PackageName; // 0x0 (0x4)
	struct FName PackagePath; // 0x4 (0x4)
	struct FName AssetName; // 0x8 (0x4)
	struct FName AssetClass; // 0xc (0x4)
	struct FTopLevelAssetPath* AssetClassPath; // 0x10 (0x8)
	unsigned char padding_18[0x20]; // 0x18 (0x20)
};

