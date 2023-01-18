// Class /Script/MetasoundEngine.MetaSoundSource
// Size: 0x7d0
class UMetaSoundSource : public USoundWaveProcedural
{
	unsigned char unreflected_4a0[0x68]; // 0x4a0 (0x68) 
	struct FMetasoundFrontendDocument RootMetaSoundDocument; // 0x508 (0x1b8)
	struct TSet<struct FString> ReferencedAssetClassKeys; // 0x6c0 (0x50)
	struct TSet<class UObject*> ReferencedAssetClassObjects; // 0x710 (0x50)
	struct TSet<struct FSoftObjectPath> ReferenceAssetClassCache; // 0x760 (0x50)
	enum EMetasoundSourceAudioFormat OutputFormat; // 0x7b0 (0x1)
	unsigned char unreflected_7b1[0x3]; // 0x7b1 (0x3) 
	struct FGuid AssetClassID; // 0x7b4 (0x10)
	unsigned char padding_7c4[0xc]; // 0x7c4 (0xc)
};

