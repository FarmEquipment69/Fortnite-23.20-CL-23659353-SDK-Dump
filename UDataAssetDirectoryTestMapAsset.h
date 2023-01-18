// Class /Script/DataAssetDirectory.DataAssetDirectoryTestMapAsset
// Size: 0x168
class UDataAssetDirectoryTestMapAsset : public UObject
{
	struct TMap<struct FString, int> StringIntMap; // 0x28 (0x50)
	struct TMap<struct FString, int> ShrinkStringIntMap; // 0x78 (0x50)
	struct TMap<struct FString, int> GrowStringIntMap; // 0xc8 (0x50)
	struct TMap<int, struct FDataAssetDirectoryTestSimpleStruct> IntStructMap; // 0x118 (0x50)
};

