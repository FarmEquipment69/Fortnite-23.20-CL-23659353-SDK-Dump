// Class /Script/Engine.NodeMappingContainer
// Size: 0x168
class UNodeMappingContainer : public UObject
{
	struct TMap<struct FName, struct FNodeItem> SourceItems; // 0x28 (0x50)
	struct TMap<struct FName, struct FNodeItem> TargetItems; // 0x78 (0x50)
	struct TMap<struct FName, struct FName> SourceToTarget; // 0xc8 (0x50)
	struct TWeakObjectPtr<class UObject> SourceAsset; // 0x118 (0x28)
	struct TWeakObjectPtr<class UObject> TargetAsset; // 0x140 (0x28)
};

