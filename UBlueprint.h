// Class /Script/Engine.Blueprint
// Size: 0xa8
class UBlueprint : public UBlueprintCore
{
	unsigned char unreflected_50[0x8]; // 0x50 (0x8) 
	class UClass* ParentClass; // 0x58 (0x8)
	struct TEnumAsByte<EBlueprintType> BlueprintType; // 0x60 (0x1)
	unsigned char bRecompileOnLoad; // 0x61 (0x1)
	unsigned char bHasBeenRegenerated; // 0x61 (0x1)
	unsigned char bIsRegeneratingOnLoad; // 0x61 (0x1)
	unsigned char unreflected_62[0x2]; // 0x62 (0x2) 
	int BlueprintSystemVersion; // 0x64 (0x4)
	class USimpleConstructionScript* SimpleConstructionScript; // 0x68 (0x8)
	struct TArray<class UActorComponent*> ComponentTemplates; // 0x70 (0x10)
	struct TArray<class UTimelineTemplate*> Timelines; // 0x80 (0x10)
	struct TArray<struct FBPComponentClassOverride> ComponentClassOverrides; // 0x90 (0x10)
	class UInheritableComponentHandler* InheritableComponentHandler; // 0xa0 (0x8)
};

