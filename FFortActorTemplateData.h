// ScriptStruct /Script/FortniteGame.FortActorTemplateData
// Size: 0x60
struct FFortActorTemplateData
{
	struct TArray<struct FName> Ids; // 0x0 (0x10)
	struct TArray<struct FName> AssetNames; // 0x10 (0x10)
	struct TArray<int> InstanceSizes; // 0x20 (0x10)
	struct TArray<int> AssetPayloads; // 0x30 (0x10)
	struct TArray<int> InstancePayloads; // 0x40 (0x10)
	struct TArray<struct FFortActorTemplateDependency> AssetDependencies; // 0x50 (0x10)
};

