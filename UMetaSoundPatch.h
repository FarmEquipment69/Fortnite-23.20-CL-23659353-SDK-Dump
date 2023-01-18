// Class /Script/MetasoundEngine.MetaSoundPatch
// Size: 0x348
class UMetaSoundPatch : public UObject
{
	unsigned char unreflected_28[0x68]; // 0x28 (0x68) 
	struct FMetasoundFrontendDocument RootMetaSoundDocument; // 0x90 (0x1b8)
	struct TSet<struct FString> ReferencedAssetClassKeys; // 0x248 (0x50)
	struct TSet<class UObject*> ReferencedAssetClassObjects; // 0x298 (0x50)
	struct TSet<struct FSoftObjectPath> ReferenceAssetClassCache; // 0x2e8 (0x50)
	struct FGuid AssetClassID; // 0x338 (0x10)
};

