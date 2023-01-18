// Class /Script/DataRegistry.MetaDataRegistrySource
// Size: 0x108
class UMetaDataRegistrySource : public UDataRegistrySource
{
	enum EMetaDataRegistrySourceAssetUsage AssetUsage; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	struct FAssetManagerSearchRules SearchRules; // 0x40 (0x50)
	struct TMap<struct FName, class UDataRegistrySource*> RuntimeChildren; // 0x90 (0x50)
	unsigned char padding_e0[0x28]; // 0xe0 (0x28)
};

